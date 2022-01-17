#pragma once
#include <iostream>
#include <utility>
#include <list>

using namespace std;

class HashUlancano
{
	int velicina;
	list<pair<int, string>>* map;
	int hashFunction(int data)
	{
		return data % velicina;
	}
public:
	HashUlancano(int size)
	{
		this->velicina = size;
		this->map = new list<pair<int, string>>[size];
	}
	bool isEmpty() const
	{
		return velicina == 0;
	}
	void add(int key, string val)
	{
		int k = hashFunction(key);
		pair<int, string> par = make_pair(key, val);
		map[k].push_back(par);
	}

	void deleteByKey(int key)
	{
		//int k = hashFunction(key);
	}
	void print()
	{
		for (int i = 0; i < velicina; i++)
		{
			cout << "BUCKET:" << i;
			for (auto x : map[i])
			{
				cout << " | key: " << x.first << ", value: " << x.second;
			}
			cout << endl;
		}
	}
	~HashUlancano()
	{
		delete[] map;
	}
};