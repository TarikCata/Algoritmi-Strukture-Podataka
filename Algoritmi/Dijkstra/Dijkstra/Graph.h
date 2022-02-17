#pragma once
#include <iostream>
#include <list>
using namespace std;


class Graph
{
private:
	int V;
	list<pair<int, int>>* adj;

public:
	Graph(int v = 10)
	{
		this->V = v;
		this->adj = new list<pair<int, int>>[V];
	}

	void addEdge(int v1, int v2, int weight)
	{
		this->adj->push_back(make_pair(v2, weight));
	}

	~Graph()
	{
		delete[]adj;
	}
};

