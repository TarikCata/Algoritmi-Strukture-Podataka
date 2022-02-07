#pragma once
#include "Tacka3D.h"
#include "Cvor.h"
using namespace std;

template<class T>
class PrioritetniRedPov
{
	Cvor<T>* prvi;
	int distance(Tacka3D& tacka)
	{
		int n = int(sqrt(pow(0 - tacka.x, 2) + pow(0 - tacka.y, 2) + pow(0 - tacka.z, 2)));
		return n;
	}
public:
	PrioritetniRedPov()
	{
		prvi = nullptr;
	}
	void dodaj(T& obj)
	{
		auto novi = new Cvor<T>(obj, nullptr);
		auto t = prvi;
		Cvor<T>* pt = nullptr;
		while (t != nullptr)
		{
			if (distance(obj) < distance(t->data))
				break;
			pt = t;
			t = t->next;
		}
		if (pt == nullptr)
			prvi = novi;
		else
			pt->next = novi;
		novi->next = t;
	}
	void ukloni()
	{
		if(isEmpty())
			throw exception("Greska. Nije moguce ukloniti elemenat iz praznog pr. reda.");
		auto temp = prvi;
		prvi = prvi->next;
		cout << "\nUklanjamo " << temp->data << "\n";
		delete temp;
	}
	bool isEmpty() const { return prvi == nullptr; }
	void print()
	{
		auto temp = prvi;
		while (temp != nullptr)
		{
			cout << temp->data;
			cout << "\nNext\n";
			temp = temp->next;
		}
	}
};