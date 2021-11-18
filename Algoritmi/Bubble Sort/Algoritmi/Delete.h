#pragma once
#include <vector>
#include "Movie.h"

void Delete(vector<Movie*>& movies) {

	for (int i = 0; i < movies.size(); ++i)
	{
		delete movies[i];
		movies[i] = nullptr;
	}
	
}