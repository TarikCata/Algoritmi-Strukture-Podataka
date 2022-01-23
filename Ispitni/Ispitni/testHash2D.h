#pragma once
#include "Tacka2D.h"
#include "HashChained.h"
void testHash2D()
{
	Tacka2D tacka1(3, 4);
	Tacka2D tacka2(8,45);
	Tacka2D tacka3(2, 39);
	Tacka2D tacka4(43, 45);
	Tacka2D tacka5(12, 32);
	Tacka2D tacka6(9, 54);
	Tacka2D tacka7(7, 75);
	Tacka2D tacka8(3, 70);
	Tacka2D tacka9(5, 2);
	Tacka2D tacka10(19, 1);

	HashChained<Tacka2D> tacke;
	tacke.add(tacka1);
	tacke.add(tacka2);
	tacke.add(tacka3);
	tacke.add(tacka4);
	tacke.add(tacka6);
	tacke.add(tacka7);
	tacke.add(tacka8);
	tacke.add(tacka9);
	tacke.add(tacka10);
	tacke.print();
	tacke.remove(tacka1);
	tacke.print();
}