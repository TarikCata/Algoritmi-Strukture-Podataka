#pragma once
#include <random>
using namespace std;
int getRandom()
{
	random_device dev;
	mt19937 rng(dev());
	uniform_int_distribution<mt19937::result_type> dist6(100,1000);

	return dist6(rng);
}