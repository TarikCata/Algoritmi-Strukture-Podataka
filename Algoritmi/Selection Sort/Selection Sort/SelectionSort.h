#pragma once

void SelectionSort(int* arr, const int length) {
	int min;
	for (int i = 0; i < length-1; i++)
	{
		min = i;
		for (int j = i+1; j < length; j++)
		{
			if (arr[j] < arr[min])
				min = j;
		}
		if (min != i)
		{
			int pom = arr[i];
			arr[i] = arr[min];
			arr[min] = pom;
		}
	}
}