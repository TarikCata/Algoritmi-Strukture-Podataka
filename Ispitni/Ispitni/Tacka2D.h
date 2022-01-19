#pragma once
#include <iostream>
using namespace std;
struct Tacka2D
{
	int x;
	int y;
	Tacka2D(int x = 0, int y = 0)
	{
		this->x = x;
		this->y = y;
	}
	friend ostream& operator<<(ostream& c, Tacka2D tacka)
	{
		c << "(" << tacka.x << "  " << tacka.y << ")";
		return c;
	}
};