#include "map.h"
#include <iostream>
#include <string>

int main() {
	map<int, std::string> a;
	int k = 97;
	for (int i = 0; i < 20; i++) {
		a.insert({ k++,"frirj" });
	}

	a.print();

	std::cout << "\n\n\n\n";
	
	a.insert_or_assign({ 97,"AYE" });

	a.print();

	std::cout << "\n\n";
	std::cout << (*a.find(98)).second;
	std::cout << a.size() << "\n\n";
	a.clear();
	std::cout << a.size();
	return 0;
}