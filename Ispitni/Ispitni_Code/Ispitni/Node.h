#pragma once
template<class T>
struct Node
{
	T data;
	Node<T>* next;
	Node(T& data, Node<T>* next)
	{
		this->data = data;
		this->next = next;
	}
};