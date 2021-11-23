#pragma once
#include "Node.h"

template<class T>
class Lista 
{
public:
	Lista()
	{
		first = nullptr;
	}
	void push_back(const T& data) {
		if (first == nullptr)
		{
			first = new Node<T>(data, nullptr);
			brojac++;

		}
		else {
			auto temp = first;
			while (temp->next != nullptr)
			{
				temp = temp->next;
			}
			temp->next = new Node<T>(data, nullptr);
			brojac++;
		}
	}
	void print() {
		if (first == nullptr)
			return;
		Node<T>* temp = first;
		while (temp != nullptr)
		{
			std::cout << temp->data << "  ";
			temp = temp->next;
		}
		std::cout << "\n";
	}
	void remove()
	{
		auto temp1 = first;
		Node<T>* temp2 = nullptr;
		while (temp1->next != nullptr)
		{
			temp2 = temp1;
			temp1 = temp1->next;
		}
		T val = temp1->data;
		delete temp1;
		if (temp2 != nullptr)
			temp2->next = nullptr;
		else
			first = nullptr;
	}
	void dodaj_predzadnji(const T& data)
	{
		auto temp = first;

		while (temp->next->next != nullptr)
			temp = temp->next;

		temp->next = new Node<T>(data, temp->next);
	}
private:
	Node<T>* first;
	int brojac = 0;
};