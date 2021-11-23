#pragma once
#include <iostream>
int findHighest(int* arr,const int length) {
	int temp = 0,lokacija = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] > temp)
		{
			temp = arr[i];
			lokacija = i;
		}
	return lokacija;
}