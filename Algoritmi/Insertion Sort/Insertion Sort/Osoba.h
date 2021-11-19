#pragma once
#include <iostream>
using namespace std;
class Osoba
{
public:
	Osoba(const string&,float);
	~Osoba();
	friend ostream& operator<<(ostream&,const Osoba&);
	float getHeight() const { return height; }
private:
	string name;
	float height;
};

Osoba::Osoba(const string& name, float height)
{
	this->name = name;
	this->height = height;
}

Osoba::~Osoba()
{
	this->name = "";
	this->height = 0;
}

ostream& operator<<(ostream& cout, const Osoba& obj)
{
	cout << obj.name << "  " << obj.height << " cm" << endl;
	return cout;
}