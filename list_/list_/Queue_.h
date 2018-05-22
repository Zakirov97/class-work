#pragma once
#include "list_.h"
template<class T>
class Queue_
{
private:
	list_<T> q;
public:
	int size() const;
	T& back();
	T& front();
	void push(T val);
	void pop();
	bool empty() const;
};