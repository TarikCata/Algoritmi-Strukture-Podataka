#pragma once

template<class T>
struct NodeStack
{
	T _data;
	NodeStack<T>* _previous;
public:
	NodeStack(const T& data, NodeStack<T>* previous) : _data(data), _previous(previous){}
	
};