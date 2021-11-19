#pragma once
#include <random>
using namespace std;
int getRandom(int r1, int r2)
{
	random_device dev;
	mt19937 rng(dev());
	uniform_int_distribution<mt19937::result_type> dist6(r1, r2);

	return dist6(rng);
}
