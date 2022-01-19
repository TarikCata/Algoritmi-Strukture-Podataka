#include <iostream>
#include <list>
#include "Tacka2D.h"
#include "HashChained.h"
using namespace std;

int main()
{
	Tacka2D tacka1(1, 2);
	Tacka2D tacka2(3, 4);
	Tacka2D tacka3(5, 6);
	Tacka2D tacka4(7, 8);
	Tacka2D tacka5(9, 10);
	Tacka2D tacka6(11, 12);
	Tacka2D tacka7(13, 14);
	Tacka2D tacka8(15, 16);
	Tacka2D tacka9(17, 18);
	Tacka2D tacka10(19, 20);

	HashChained<Tacka2D> hash;
	hash.add(tacka1);
	hash.add(tacka2);
	hash.add(tacka3);
	hash.add(tacka4);
	hash.add(tacka5);
	hash.add(tacka6);
	hash.add(tacka7);
	hash.add(tacka8);
	hash.add(tacka9);
	hash.add(tacka10);
	hash.print();
	
	hash.remove(tacka1);
	cout << endl << endl;
	hash.print();
	hash.remove(tacka2);
	hash.remove(tacka3);
	hash.remove(tacka4);
	hash.remove(tacka5);
	hash.remove(tacka6);
	hash.remove(tacka7);
	hash.remove(tacka8);
	hash.remove(tacka9);
	hash.remove(tacka10);
	hash.print();

	return 0;
}