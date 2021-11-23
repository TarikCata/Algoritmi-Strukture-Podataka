#pragma once
#include "Lista.h"
void funk1() {
	/*
		a) uklanjanje cvora sa zadnje pozicije
		b) dodavanje cvora na zadnju poziciju
	*/
	Lista<int> l1;
	l1.push_back(1);
	l1.push_back(2);
	l1.push_back(3);
	l1.push_back(4);
	l1.push_back(5);
	l1.print();
	l1.dodaj_predzadnji(1221);
	l1.print();
	l1.remove();
	l1.print();
}