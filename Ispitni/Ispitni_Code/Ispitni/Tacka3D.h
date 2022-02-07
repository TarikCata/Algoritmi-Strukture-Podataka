#pragma once
#include <iostream>
using namespace std;
class Tacka3D
{
public:
	int x, y, z;
	Tacka3D(int x = 0,int y = 0,int z= 0)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	friend ostream& operator<<(ostream& cout,const Tacka3D& tacka)
	{
		cout << "(" << tacka.x << "   " << tacka.y << "   " << tacka.z << ")";
		return cout;
	}
	bool operator==(Tacka3D& tacka)
	{
		return tacka.x == this->x && tacka.y == this->y && tacka.z == this->z;
	}
};