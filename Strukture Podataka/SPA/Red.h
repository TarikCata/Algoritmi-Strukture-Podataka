#pragma once
#include "Node.h"

template<class T>
class Red
{
public:
	void Add(const T& data)
	{
		if (isEmpty())
		{
			pocetak = new Node<T>(data, nullptr);
			kraj = pocetak;
			brojac++;
		}
		else {
			kraj->next = new Node<T>(data, nullptr);
			kraj = kraj->next;
			brojac++;
		}
	}
	T remove() {
		if (isEmpty())
			std::cout << "Red je prazan";
		else if (pocetak->next == nullptr)
		{
			std::cout << "\nRed ima jedan element\n";
			auto value = pocetak->data;
			delete pocetak;
			brojac--;
			return value;
		}
		else {
			auto temp = pocetak->next;
			auto value = pocetak->data;
			delete pocetak;
			pocetak = temp;
			brojac--;
			return value;
		}
	}
	void print() {
		if (isEmpty())
			std::cout << "Nema elemeta..\n";
		auto temp = pocetak;
		while (temp != nullptr)
		{
			std::cout << temp->data << "  ";
			temp = temp->next;
		}
	}
	bool isEmpty() {
		return brojac == 0;
	}
	bool empty(){

		if (!isEmpty())
		{
			auto temp = pocetak;
			while (temp != nullptr)
			{
				auto temp2 = temp->next;
				delete temp;
				temp = temp2;
				brojac--;
			}
			return true;
		}
		return false;
	}
private:
	int brojac = 0;
	Node<T>* pocetak = nullptr;
	Node<T>* kraj = nullptr;

};

