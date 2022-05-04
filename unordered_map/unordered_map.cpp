#include <unordered_map>
#include <iostream>
#include "unordered_map.h"

int main() {
	std::unordered_map<int, int> j;
	j[5] = 6;
	std::cout << j.find(5)->second;
	std::cout<<"\n\n\n\n";
	unordered_map<std::string, int> a;
	a.insert({ "a",5 });
	a.insert({ "b",35 });
	a.insert({ "c", 9035 });
	a.insert({ "d",5 });
	a.insert({ "e",35 });
	a.insert({ "f", 9035 });
	a.insert({ "g",5 });
	a.insert({ "h",35 });

	a.erase("g");
	a.insert_or_assign({ "h",75368 });

	auto it = unordered_map<std::string, int>::Iterator(a.back());
	std::cout << (*it).first << "\n";

	std::cout << (*a.find("h")).second;
	a.clear();
	std::cout << "\n\n" << a.size() << " " << a.max_size();
	return 0;
}