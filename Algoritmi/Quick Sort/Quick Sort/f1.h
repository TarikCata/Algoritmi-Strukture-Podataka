#pragma once
#include "getRandon.h"
#include "Print.h"
#include "QuickSort.h"
#include "findHighest.h"

void funk1() {
	int arr[] = { getRandom(),getRandom(),getRandom(),getRandom(), getRandom(), getRandom(), getRandom(), getRandom(), };
	Print(arr, size(arr));

	QuickSort(arr,0, 7);
	Print(arr, size(arr));
}