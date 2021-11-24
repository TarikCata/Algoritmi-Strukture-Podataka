#pragma once
#include <iostream>
#include "getRandom.h"
#include "SelectionSort.h"

using namespace std;

void print(int *arr,const int length) {
	for (int i = 0; i < length; i++)
		cout << arr[i] << "  ";
	cout << endl;
}

void f1() {
	int arr[] = { getRandom(),getRandom(), getRandom(), getRandom(), getRandom(), getRandom(), getRandom() };
	print(arr, size(arr));
	SelectionSort(arr, size(arr));
	print(arr, size(arr));

}