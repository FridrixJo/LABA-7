#include <bitset>
#include <iostream>
#include "bitset.h"

int main() {
	bitset<64> a;
	a.set();
	std::cout << a.all() << "\n\n";
	std::cout << a.to_string();
	std::cout << "\n\n";
	//std::cout << a.to_ullong();
	return 0;
}