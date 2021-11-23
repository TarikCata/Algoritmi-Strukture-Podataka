#pragma once

void Swap(int* arr, int l, int h)
{
	int temp = arr[l];
	arr[l] = arr[h];
	arr[h] = temp;
}

void QuickSort(int* arr,int low , int high) {
	if (low < high)
	{
		int pivotLoc = low;
		int pivotKey = arr[low];
		for (int i = low; i < high+1; i++)
		{
			if (arr[i] < pivotKey)
			{
				pivotLoc++;
				Swap(arr, pivotLoc, i);
			}
		}
		Swap(arr, low, pivotLoc);

		QuickSort(arr, low, pivotLoc - 1);
		QuickSort(arr, pivotLoc +1, high);
	}
	
}