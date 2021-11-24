#pragma once
//zadatak na linku : https://edufit-my.sharepoint.com/:x:/r/personal/adil_fit_ba/_layouts/15/Doc.aspx?sourcedoc=%7BA80A4B51-3AA4-418E-AA83-D0480D3D2FC6%7D&file=primjer%20ispitnih%20zadataka%202020-2021.xlsx&action=default&mobileredirect=true&cid=eee66a85-a372-4781-8c4e-1a1ac3358452
#include <iostream>
using namespace std;

void print(int * niz,const int length) {
	for (int i = 0; i < length; i++)
		cout << niz[i] << "  ";
	cout << endl;
}


void SortLijevo(int* niz, const int length)
{
	for (int i = 0; i < (length / 2) - 1; ++i)
	{
		int min = i;
		for (int j = i + 1; j < length / 2; ++j)
			if (niz[j] > niz[min])
				min = j;
		if (min != i)
			swap(niz[i], niz[min]);
	}
}
void SortDesno(int * niz,const int length){
	for (int i = (length / 2); i < length - 1; ++i)
	{
		int min = i;
		for (int j = i + 1; j < length; j++)
			if (niz[j] < niz[min])
				min = j;
		if (min != i)
			swap(niz[i], niz[min]);
	}
}
void SortGoreDole(int* niz, const int length) {
	if (length % 2 != 0)
	{
		cout << "Broj nije paran\n";
		return;
	}
	SortLijevo(niz, length);
	SortDesno(niz, length);
}

void funk2() {
	int niz[] = { 8,10,6,4,5,16,8,2,3,17 };
	print(niz, size(niz));
	SortGoreDole(niz, size(niz));
	print(niz, size(niz));
}