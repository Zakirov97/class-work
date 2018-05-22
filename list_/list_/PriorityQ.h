#pragma once
#include "list_.h"
template<class T>
class PriorityQ
{
	list_<std::pair<T, int>> pq;
public:
	int size() const;
	T& back();
	T& front();
	void push(const T& val, int prior);
	void pop();
	bool empty() const;
};

