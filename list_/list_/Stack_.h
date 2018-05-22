#pragma once
#include "list_.h"
template<class T>
class Stack_
{
private:
	list_<T> s;
public:
	int size() const;
	T& getTop();
	void push(const T & val);
	void pop();
	bool empty() const;
};
