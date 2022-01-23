#pragma once
#include "Tacka3D.h"
#include "Cvor.h"
using namespace std;

template<class T>
class PrioritetniRedPov
{
	Cvor<T>* prvi;
public:
	PrioritetniRedPov()
	{
		prvi = nullptr;
	}


	bool isEmpty() const { return prvi == nullptr; }
	void print()
	{
		auto temp = prvi;
		while (temp != nullptr)
		{
			cout << temp->data;
			cout << "Next\n";
			temp = temp->next;
		}
	}
};