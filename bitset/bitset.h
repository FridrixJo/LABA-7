#pragma once
#include "../../LABA$1/vector/vector/vector.h"
#include <vector>

template <size_t n>
class bitset {
public:
	const int bits = 32;
	std::vector<size_t> arr;
	int size = n / 32 + 1;

	bitset() {
		this->arr.resize(size, 0);
	}
};
