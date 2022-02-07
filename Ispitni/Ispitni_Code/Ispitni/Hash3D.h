#pragma once
#include <iostream>
#include <math.h>
#include "LinkedList.h"
#include "Tacka3D.h"
using namespace std;
template<class T>
class Hash3D
{
	int velicina;
	LinkedList<T>* map;
	int hashFunction(Tacka3D& obj)
	{
		return (int(sqrt(pow(obj.x + obj.y + obj.z, 2) / 3)) % velicina);
	}
public:
	Hash3D(int s = 10)
	{
		velicina = s;
		map = new LinkedList<T>[velicina];
	}
	void dodaj(T& obj)
	{
		int i = hashFunction(obj);
		map[i].push_back(obj);
	}
	void ukloni(T& obj)
	{
		int i = hashFunction(obj);
		auto& cell = map[i];
		if (cell.removeObj(obj))
			cout << "Uspjesno uklonjeno\n";
		else
			"Ne postoji\n";
	}
	void print()
	{
		for (int i = 0; i < velicina; i++)
		{
			cout << "BUCKET " << i << ":";
			map[i].ispis();
			cout << "\n";
		}
	}
	~Hash3D()
	{
		delete[] map;
	}
};