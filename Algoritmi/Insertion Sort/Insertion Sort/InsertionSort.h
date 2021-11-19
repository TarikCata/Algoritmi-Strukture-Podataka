#pragma once
#include "Osoba.h"
void InsertionSort(int arr[], const int length = 10) {
	int j = 0;
	for (int i = 0; i < length; i++)
	{
		j = i;
		while (j > 0 && arr[j] < arr[j-1])
		{
			int pom = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = pom;
			j--;
		}
	}
}
void InsertionSort(vector<Osoba*>* osobe) {
	Osoba* pom = nullptr;
	int j = 0;
	for (int i = 0; i < osobe->size(); ++i)
	{
		j = i;
		while (j>0 && osobe->at(j)->getHeight() < osobe->at(j-1)->getHeight())
		{
			pom = osobe->at(j);
			osobe->at(j) = osobe->at(j - 1);
			osobe->at(j - 1) = pom;
			j--;
		}
	}
}