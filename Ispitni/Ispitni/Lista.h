#pragma once
#include <iostream>
#include "Node.h"
using namespace std;

template<class T>
class Lista
{
	int brojac = 0;
	Node<T>* first = nullptr;
public:
	void push_back(T& data)
	{
		if (first == nullptr)
		{
			first = new Node<T>(data, nullptr);
			brojac++;
		}
		else
		{
			auto temp = first;
			while (temp->next != nullptr)
			{
				temp = temp->next;
			}
			temp->next = new Node<T>(data, nullptr);
			brojac++;
		}
	}
	void ukloni(T& obj)
	{
		if (first == nullptr)
			return;
		Node<T>* temp = first;
		Node<T>* pt = nullptr;

		while (temp != nullptr)
		{
			if (temp->data == obj)
				break;
			pt = temp;
			temp = temp->next;
		}

		if (temp == nullptr)
			return;
		if (pt == nullptr)
			first = first->next;
		else
			pt->next = temp->next;
		delete temp;
	}

	void ispis()
	{
		Node<T>* temp = first;
		while (temp != nullptr)
		{
			cout << "|" << temp->data << "|";
			temp = temp->next;
		}
	}
	int size() const { return brojac; }
	bool isEmpty() const { return first == nullptr; }
};