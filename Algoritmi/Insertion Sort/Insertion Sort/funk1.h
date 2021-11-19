#pragma once
#include <iostream>
#include "getRandom.h"
#include "InsertionSort.h"
using namespace std;
void funk1() {
	int arr[10]{};
	for (int i = 0; i < size(arr); i++)
		arr[i] = getRandom(100, 1000);
	for (int i = 0; i < size(arr); i++)
		cout << arr[i] << "  ";
	InsertionSort(arr);
	cout << endl;
	for (int i = 0; i < size(arr); i++)
		cout << arr[i] << "  ";
}