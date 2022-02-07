#pragma once
#include "PrioritetniRedPov.h"
#include "Tacka3D.h"
void testPrioritetniRedPov()
{
	Tacka3D tacka1(3, 1, 2);
	Tacka3D tacka2(8, 6, 45);
	Tacka3D tacka3(2, 45, 39);
	Tacka3D tacka4(43, 32, 45);
	Tacka3D tacka5(12, 65, 32);
	Tacka3D tacka6(9, 64, 54);
	Tacka3D tacka7(7, 73, 75);
	Tacka3D tacka8(3, 23, 70);
	Tacka3D tacka9(5, 40, 2);
	Tacka3D tacka10(19, 10, 1);

	PrioritetniRedPov<Tacka3D> tacke;
	tacke.dodaj(tacka1);
	tacke.dodaj(tacka2);
	tacke.dodaj(tacka3);
	tacke.dodaj(tacka4);
	tacke.dodaj(tacka6);
	tacke.dodaj(tacka7);
	tacke.dodaj(tacka8);
	tacke.dodaj(tacka9);
	tacke.dodaj(tacka10);
	tacke.print();
	tacke.ukloni();
	tacke.ukloni();
	tacke.print();
}