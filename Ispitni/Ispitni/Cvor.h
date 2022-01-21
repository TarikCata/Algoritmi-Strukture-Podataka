#pragma once
#include "Tacka3D.h"

template<class T>
struct Cvor
{
	T data;
	Cvor<T>* next;
	Cvor(T& data, Cvor<T>* next)
	{
		this->data = data;
		this->next = next;
	}
};