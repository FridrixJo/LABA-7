#include <set>
#include <iostream>
#include "set.h"

int main(){
	set<int> a;
	a.insert(3);
	auto it = a.upper_bound(3);
}