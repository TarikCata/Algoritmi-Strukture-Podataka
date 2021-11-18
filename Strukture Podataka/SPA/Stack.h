#pragma once
#include "NodeStack.h"


template<class T>
class Stack
{
public:
	Stack()
	{
		top = nullptr;
	}
	void Add(const T& data){
		if (isEmpty())
			top = new NodeStack<T>(data,nullptr);
		else {
			NodeStack<T>* temp = new NodeStack<T>(data, nullptr);
			temp->_previous = top;
			top = temp;
		}
	}
	T remove() {
		if (isEmpty())
			throw std::exception("Nema elementa u steku");
		else if (top->_previous == nullptr) {
			auto value = top->_data;
			delete top;
			return value;
		}
		else {
			NodeStack<T>* temp = top->_previous;
			auto value = top->_data;
			delete top;
			top = temp;
			return value;
		}
	}
	void print() {
		if (!isEmpty())
		{
			NodeStack<T>* temp = top;
			while (temp != nullptr)
			{
				std::cout << temp->_data << "  ";
				temp = temp->_previous;
			}
		}
	}
	bool isEmpty() {
		if (top == nullptr)
			return true;
		return false;
	}
private:
	NodeStack<T>* top;
};

