#ifndef UNORDERED_MAPSOURCE_H
#define UNORDERED_MAPSOURCE_H

#include <string>
#include "../../LABA$4/pair/pair.h"

int HashFunctionHorner(const std::string& s, int table_size, const int key)
{
    int hash_result = 0;
    for (int i = 0; i < s.size(); i++)
    {
        hash_result = (key * hash_result + s[i]) % table_size;
    }
    hash_result = (hash_result * 2 + 1) % table_size;
    return hash_result;
}

struct HashFunction1
{
    int operator()(const std::string& s, int table_size) const
    {
        return HashFunctionHorner(s, table_size, table_size - 1);
    }
};

struct HashFunction2
{
    int operator()(const std::string& s, int table_size) const
    {
        return HashFunctionHorner(s, table_size, table_size + 1);
    }
};

template <class KeyType, class ValueType, class THash1 = HashFunction1, class THash2 = HashFunction2>
class unordered_map
{
private:
    const int default_size = 8;
    const double rehash_size = 0.5;

    class Node {
    public:
        pair<std::string, int> pair;
        bool state;

        Node() = default;
        ~Node() = default;

    };

    Node* newNode(const pair<std::string,int>& pair) {
        Node* node = new Node();
        node->pair = pair;
        node->state = true;
        return node;
    }

    Node** arr;
    int m_size;
    int buffer_size;
    int size_all_non_nullptr;

public:

    unordered_map()
    {
        buffer_size = default_size;
        m_size = 0;
        size_all_non_nullptr = 0;
        arr = new Node * [buffer_size];
        for (int i = 0; i < buffer_size; ++i)
            arr[i] = nullptr;
    }

    ~unordered_map()
    {
        for (int i = 0; i < buffer_size; ++i)
            if (arr[i])
                delete arr[i];
        delete[] arr;
    }

    void reserve()
    {
        int past_buffer_size = buffer_size;
        buffer_size *= 2;
        size_all_non_nullptr = 0;
        m_size = 0;
        Node** arr2 = new Node * [buffer_size];
        for (int i = 0; i < buffer_size; ++i)
            arr2[i] = nullptr;
        std::swap(arr, arr2);
        for (int i = 0; i < past_buffer_size; ++i)
        {
            if (arr2[i] && arr2[i]->state)
                insert(arr2[i]->pair);
        }
        for (int i = 0; i < past_buffer_size; ++i)
            if (arr2[i])
                delete arr2[i];
        delete[] arr2;
    }

    void rehash()
    {
        size_all_non_nullptr = 0;
        m_size = 0;
        Node** arr2 = new Node * [buffer_size];
        for (int i = 0; i < buffer_size; ++i)
            arr2[i] = nullptr;
        std::swap(arr, arr2);
        for (int i = 0; i < buffer_size; ++i)
        {
            if (arr2[i] && arr2[i]->state)
                insert(arr2[i]->pair);
        }
        for (int i = 0; i < buffer_size; ++i)
            if (arr2[i])
                delete arr2[i];
        delete[] arr2;
    }

    bool insert(const pair<std::string,int>& pair, const THash1& hash1 = THash1(), const THash2& hash2 = THash2())
    {
        if (m_size + 1 > int(rehash_size * buffer_size))
            reserve();
        else if (size_all_non_nullptr > 2 * m_size)
            rehash();
        int h1 = hash1(pair.first, buffer_size);
        int h2 = hash2(pair.first, buffer_size);
        int i = 0;
        int first_deleted = -1;
        while (arr[h1] != nullptr && i < buffer_size)
        {
            if (arr[h1]->pair.first == pair.first && arr[h1]->state)
                return false;
            if (!arr[h1]->state && first_deleted == -1)
                first_deleted = h1;
            h1 = (h1 + h2) % buffer_size;
            ++i;
        }
        if (first_deleted == -1)
        {
            arr[h1] = newNode(pair);
            ++size_all_non_nullptr;
        }
        else
        {
            arr[first_deleted]->pair.first = pair.first;
            arr[first_deleted]->state = true;
        }
        m_size++;
        return true;
    }

    bool insert_or_assign(const pair<std::string, int>& pair, const THash1& hash1 = THash1(), const THash2& hash2 = THash2())
    {
        if (contains(pair.first)) {
            int h1 = hash1(pair.first, buffer_size);
            int h2 = hash2(pair.first, buffer_size);
            int i = 0;
            while (arr[h1] != nullptr && i < buffer_size)
            {
                if (arr[h1]->pair.first == pair.first && arr[h1]->state) {
                    arr[h1]->pair.second = pair.second;
                    return true;
                }

                h1 = (h1 + h2) % buffer_size;
                i++;
            }
        }
        else {
            insert(pair);
        }
    }


    bool erase(const KeyType& key, const THash1& hash1 = THash1(), const THash2& hash2 = THash2())
    {
        if (contains(key)) {
            int h1 = hash1(key, buffer_size);
            int h2 = hash2(key, buffer_size);
            int i = 0;

            while (arr[h1] != nullptr && i < buffer_size)
            {
                if (arr[h1]->pair.first == key && arr[h1]->state)
                {
                    arr[h1]->state = false;
                    m_size--;
                    return true;
                }
                h1 = (h1 + h2) % buffer_size;
                ++i;
            }
        }
        else
            return false;
    }

    bool contains(const KeyType& key, const THash1& hash1 = THash1(), const THash2& hash2 = THash2())
    {
        int h1 = hash1(key, buffer_size);
        int h2 = hash2(key, buffer_size);
        int i = 0;
        while (arr[h1] != nullptr && i < buffer_size)
        {
            if (arr[h1]->pair.first == key && arr[h1]->state)
                return true;
            h1 = (h1 + h2) % buffer_size;
            ++i;
        }
        return false;
    }

    size_t size() {
        return m_size;
    }

    size_t max_size() {
        return buffer_size;
    }

    bool empty() {
        return !m_size;
    }

    class Iterator {
    private:
        Node** cur;

    public:
        Iterator(Node** other) {
            this->cur = other;
        }

        Node* operator++(int) {
            cur++;
            while (!*cur || (*cur && !((*cur)->state)))
                cur++;

            return *cur;
        }
        Node* operator--(int) {
            cur--;
            while (!*cur || (*cur && !((*cur)->state)))
                cur--;

            return *cur;
        }

        pair<KeyType,ValueType>& operator*() {
            return (*cur)->pair;
        }

        bool operator!=(const Iterator& other) { return cur != other.cur; }
        bool operator==(const Iterator& other) { return cur == other.cur; }
    };

    Iterator find(const KeyType& key) {
        if (contains(key)) {
            auto it = unordered_map<KeyType, ValueType>::Iterator(this->begin());
            for (it; it != this->back(); it++) {
                if ((*it).first == key)
                    return it;
            }
        }
        else {
            return nullptr;
        }
    }

    void clear() {
        auto it = unordered_map<KeyType, ValueType>::Iterator(this->begin());
        while (m_size) {
            erase((*it).first);
            if (!m_size)
                break;
            it++;
        }
        rehash();
    }

    Iterator begin() {
        int k = 0;
        while (!*(arr + k) || (*(arr + k) && !((*(arr + k))->state)))
            k++;

        return arr + k;
    }

    Iterator back() {
        int k = buffer_size - 1;
        while (!*(arr + k) || (*(arr + k) && !((*(arr + k))->state)))
            k--;

        return arr + k;
    }
};

#endif // UNORDERED_MAPSOURCE_H
