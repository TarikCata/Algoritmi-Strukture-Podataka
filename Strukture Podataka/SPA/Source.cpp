#include <iostream>
#include <list>
#include "Stack.h"
#include "Red.h"
#include "Lista.h"

using namespace std;

void fStack()
{
	Stack<int> stek;
	cout << "Dodajemo elemente\n";
	stek.Add(1);
	stek.Add(2);
	stek.Add(3);
	stek.Add(4);
	stek.Add(5);
	stek.print();
	cout << "\nIzacujemo " << stek.remove() << endl;
	stek.print();
}

void fRed() {
	Red<int> red;
	red.Add(1);
	red.Add(2);
	red.Add(3);
	red.Add(4);
	red.print();
	cout <<  "\nIzbacujemo broj " << red.remove() << "\n";
	red.print();
	if (red.empty())
		cout << "\nRed je ispraznjen\n";
	
}

void fLista() {
	List<int> l;
	/*l.push_front(1);
	l.push_front(2);
	l.push_front(3);*/
	//l.print();
	//cout << "\n";
	l.push_back(4);
	l.push_back(5);
	l.push_back(6);
	l.push_back(7);
	l.push_back(8);
	l.push_back(9);
	l.print();
	l.reverse();
	cout << endl;
	l.print();
	/*l.pop_last();
	l.pop();
	cout << "\n";
	l.print();
	if (l.empty())
		cout << "\nLista ispraznjena\n";*/
}

int main() {
	//fStack();
	//fRed();
	fLista();

	return 0;
}