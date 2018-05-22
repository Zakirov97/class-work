#pragma once
#include "list_.h"
template<class T>
class CircularQueue_
{
private:
	list_<T> cq;
public:
	int size() const;
	T& back();
	T& front();
	void push(T val);
	void pop();
	bool empty() const;
	void frontToBack();
};