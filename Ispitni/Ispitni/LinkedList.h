#pragma once
#include <iostream>
#include "Cvor.h"
using namespace std;

template<class T>
class LinkedList
{
	Cvor<T>* prvi;
public:
	LinkedList()
	{
		prvi = nullptr;
	}
	void push_back(T& obj)
	{
		if (prvi == nullptr)
			prvi = new Cvor<T>(obj, nullptr);
		else
		{
			auto temp = prvi;
			while (temp->next != nullptr)
				temp = temp->next;
			temp->next = new Cvor<T>(obj, nullptr);
		}
	}
	bool removeObj(T& obj)
	{
		if (prvi == nullptr)
			throw exception("nema elemenata");
		Cvor<T>* temp = nullptr;
		Cvor<T>* temp2 = prvi;
		while (temp2 != nullptr)
		{
			if (temp2->data == obj)
				break;
			temp = temp2;
			temp2 = temp2->next;
		}
		if (temp2 == nullptr)
			return false;
		if (temp == nullptr)
			prvi = temp2->next;
		else
			temp->next = temp2->next;
		delete temp2;
		return true;
	}
	void ispis()
	{
		Cvor<T>* temp = prvi;
		while (temp != nullptr)
		{
			cout << " |" << temp->data << "| ";
			temp = temp->next;
		}
	}
};