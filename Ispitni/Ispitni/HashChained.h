#pragma once
#include <iostream>
#include <math.h>
#include "Lista.h"
using namespace std;


template<class T>
class HashChained
{
	int velicina;
	Lista<T>* map;
	int hashFunction(Tacka2D& tacka)
	{
		return int((sqrt(pow(tacka.x + tacka.y, 2) / 2))) % velicina;
	}
public:
	HashChained(int velicina = 10)
	{
		this->velicina = velicina;
		map = new Lista<T>[velicina];
	}
	void add(T& data)
	{
		int n = hashFunction(data);
		map[n].push_back(data);
	}
	void remove(T& data)
	{
		int n = hashFunction(data);
		auto& cell = map[n];
		cell.ukloni();
	}
	void print()
	{
		for (int i = 0; i < velicina; i++)
		{
			cout << "BUCKET " << i << ":";
			map[i].ispis();
			cout << endl;
		}
	}
	int getV() { return velicina; }
	~HashChained()
	{
		delete[] map;
	}
};