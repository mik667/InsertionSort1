#define CATCH_CONFIG_MAIN

#include <catch.hpp>
#include "BubbleSort.h"

TEST_CASE() {
	int Array[5] = { 3, 1, 7, 4, 5 };
	int N = 5;
	bool flag = 1;
	BubbleSort(Array, N);
	for (int i = 0; i < N-1; i++) {
		if (Array[i] > Array[i + 1]) flag = 0;
	}
	REQUIRE(flag);


}

TEST_CASE() {
	int Array[5] = {};
	int N = 5;
	bool flag = 1;
	BubbleSort(Array, N);
	for (int i = 0; i < N - 1; i++) {
		if (Array[i] > Array[i + 1]) flag = 0;
	}
	REQUIRE(flag);
}

TEST_CASE() {
	double Array[5] = {0, 1.2, -10, 10, 5.4};
	int N = 5;
	bool flag = 1;
	BubbleSort(Array, N);
	for (int i = 0; i < N - 1; i++) {
		if (Array[i] > Array[i + 1]) flag = 0;
	}
	REQUIRE(flag);
}