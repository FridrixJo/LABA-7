#pragma once
#include "../../LABA$1/vector/vector/vector.h"
#include <vector>

template <size_t n>
class bitset {
private:
	unsigned long long a;

public:
	bitset() {
		this->a = 0;
	}

	void set(int pos) {
		a |= (1U << pos);
	}

	void set() {
		a |= -1;
	}

	void operator[](const int index) {
		a |= (1U << index);
	}

	void reset(int pos) {
		a &= ~(1U << pos);
	}

	void reset() {
		a &= 0;
	}

	void flip(int pos) {
		a ^= (1U << pos);
	}

	void flip() {
		a = ~a;
	}

	bool all() {
		if (a & ULLONG_MAX)
			return true;
		return false;
	}

	bool any() {
		if (a)
			return true;
		return false;
	}

	bool none() {
		if (!a)
			return true;
		return false;
	}

	bool test(int pos) {
		if (a & (1U << pos))
			return true;
		return false;
	}

	int size() {
		return n;
	}

	std::string toBinary(unsigned long long a) {
		std::string s, temp;
		while (a) {
			int p = a % 2;
			s.push_back(static_cast<char>(p) + 48);
			a -= p;
			a /= 2;
		}
		for (int i = s.size() - 1; i >= 0; i--) {
			temp.push_back(s[i]);
		}
		return temp;
	}

	std::string to_string() {
		std::string temp = toBinary(a);
		int dif = n - temp.size();
		std::string s;
		for (int i = 0; i < dif; i++) {
			s.push_back('0');
		}
		s += temp;
		return s;
	}

	unsigned long to_ulong() {
		return a;
	}

	unsigned long long to_ullong() {
		return a;
	}




};
