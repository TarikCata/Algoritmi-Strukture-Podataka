#pragma once
#include <iostream>
#include <string>

using namespace std;

class Movie
{
public:
	Movie(const string& name, double duration)
	{
		this->name = name;
		this->duration = duration;
	}
	void print()
	{
		cout << name << "  " << duration << " min\n";
	}
	
	double getDuration() const { return duration; }
private:
	string name;
	double duration;
};
