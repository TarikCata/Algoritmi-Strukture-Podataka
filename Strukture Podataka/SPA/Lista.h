#pragma once
#include "Node.h"


template<class T>
class List 
{
public:
	List() 
	{
		brojac = 0;
		first = nullptr;
	}
	void push_front(const T& data) {
		if (isEmpty())
		{
			first = new Node<T>(data, nullptr);
			brojac++;
		}
		else {
			auto temp = new Node<T>(data, nullptr);
			temp->next = first;
			first = temp;
			brojac++;
		}
	}
	void push_back(const T& data) {
		if (isEmpty())
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
	T pop() {
		if (isEmpty())
			std::cout << "Lista je prazna\n";
		auto value = first->data;
		auto temp = first->next;
		delete first;
		first = temp;
		brojac--;
		return value;
	}
	T pop_last() {
		auto temp = first;
		Node<T>* temp2 = nullptr;
		while (temp->next != nullptr)
		{
			temp2 = temp;
			temp = temp->next;
		}
		T value = temp->data;
		delete temp;
		brojac--;

		if (temp2 != nullptr)
			temp2->next = nullptr;
		else
			first = nullptr;

		return value;
	}
	void print() {
		auto temp = first;
		while (temp != nullptr)
		{
 			std::cout << temp->data << "  ";
			temp = temp->next;
		}
	}
	bool empty() {
		while (!isEmpty())
		{
			auto temp = first;
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

	void reverse() {
		Node<T>* next = nullptr;
		Node<T>* previous = nullptr;
		Node<T>* current = first;
		while (current != nullptr)
		{
			next = current->next;
			current->next = previous;
			previous = current;
			current = next;
		}
		first = previous;
	}

	bool isEmpty() { return brojac == 0; }

	int size() const { return brojac; }

private:
	Node<T>* first;
	int brojac;
};
