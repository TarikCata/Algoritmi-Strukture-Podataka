#pragma once
#include <iostream>
#include "getRandom.h"
#include "InsertionSort.h"
#include "Osoba.h"

using namespace std;

vector<Osoba*> initialize(Osoba& o1,Osoba& o2,Osoba& o3,Osoba& o4,Osoba& o5) {
	vector<Osoba*> tmp;
	tmp.push_back(new Osoba(o1));
	tmp.push_back(new Osoba(o2));
	tmp.push_back(new Osoba(o3));
	tmp.push_back(new Osoba(o4));
	tmp.push_back(new Osoba(o5));
	return tmp;
}


void deleteV(vector<Osoba*>& osobe) {
	for (auto v : osobe)
		delete v;
	osobe.clear();
}

void print(vector<Osoba*>& osobe) {
	for (auto v : osobe)
		cout << *v;
}
void funk2() {
	Osoba o1("Ime 1", getRandom(120, 210));
	Osoba o2("Ime 2", getRandom(120, 210));
	Osoba o3("Ime 3", getRandom(120, 210));
	Osoba o4("Ime 4", getRandom(120, 210));
	Osoba o5("Ime 5", getRandom(120, 210));
	
	vector<Osoba*> osobe = initialize(o1,o2,o3,o4,o5);
	print(osobe);
	cout << endl;
	InsertionSort(&osobe);
	print(osobe);
	deleteV(osobe);
}