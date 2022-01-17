#pragma once
#include <iostream>
using namespace std;

template <class T>
class Heap
{
public:

	void dodaj(const T& v)
	{
		brojac++;
		N[brojac] = v;
		rekonstrukcijaPremaGore(v);
	}
	void rekonstrukcijaPremaGore(const T& v)
	{
		if (v == 1)
			return;

		int parent = v / 2;

		if (N[v] > N[parent])
		{
			/*swapPoIndeks(v, parent);*/
			swap(N[v], N[parent]);
			rekonstrukcijaPremaGore(parent);
		}
	}
	T remove()
	{
		if (brojac == 0)
			throw exception("greska...");
		T x = N[1];
		N[1] = N[brojac];
		brojac--;

		rekonstrukcijaPremaDole(1);
		return x;
	}


	void rekonstrukcijaPremaDole(const T& v)
	{
		if (2 * v > brojac)
			return;

		int maxI = v;

		int left = 2 * v;
		int right = left + 1;

		if (N[left] > maxI)
		{
			maxI = left;
		}

		if (right <= brojac && N[right] > N[maxI])
		{
			maxI = right;
		}

		if (maxI != v)
		{
			swap(N[v], N[maxI]);
			rekonstrukcijaPremaDole(maxI);
		}
	}


	void print() {
		if (brojac == 0)
			return;
		for (int i = 1; i <= brojac; i++)
			cout << N[i] << "  ";
		cout << endl;
	}

private:
	int brojac = 0;
	int max = 5;
	T* N = new T[max];
	void swapPoIndeks(const T& v1, const T& v2)
	{
		int temp = N[v1];
		N[v1] = N[v2];
		N[v2] = temp;
	}
};