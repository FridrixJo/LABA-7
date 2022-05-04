#include <set>
#include <iostream>
#include "set.h"

int main(){
	set<std::string> a;
	a.insert("ifjir");
	a.insert("a");
	a.insert("b");
	a.print();
	a.clear();
	std::cout << a.size();
}