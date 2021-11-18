#include <iostream>
#include <string>
#include <random>
#include <vector>

#include "Movie.h"
#include "bubbleSort.h"
#include "getRandom.h"

using namespace std;

void printV(vector<Movie*>& movies) {
	for (auto i : movies)
		i->print();
}
void Delete(vector<Movie*>& movies) {

	for (int i = 0; i < movies.size(); ++i)
	{
		delete movies[i];
		movies[i] = nullptr;
	}

}

int main() {

	Movie m1("Movie 3", getRandom(90, 150));
	Movie m2("Movie 4", getRandom(90, 150));
	Movie m3("Movie 5", getRandom(90, 150));
	Movie m4("Movie 1", getRandom(90, 150));
	Movie m5("Movie 1", getRandom(90, 150));
		
	vector<Movie*> movies;
	movies.push_back(new Movie(m1));
	movies.push_back(new Movie(m2));
	movies.push_back(new Movie(m3));
	movies.push_back(new Movie(m4));
	movies.push_back(new Movie(m5));
	
	printV(movies);
	
	bubbleSort(&movies);
	cout << endl;
	printV(movies);
	
	Delete(movies);
	return 0;
}