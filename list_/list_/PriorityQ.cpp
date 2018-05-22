#include "PriorityQ.h"


template<class T>
int PriorityQ<T>::size() const
{
	return pq.getSize();
}

template<class T>
T & PriorityQ<T>::back()
{
	return pq.back();
}

template<class T>
T & PriorityQ<T>::front()
{
	return pq.front();
}

template<class T>
void PriorityQ<T>::push(const T& val, int prior)
{
	int pos = 0;
	for (size_t i = 0; i < pq.getSize(); i++)
	{
		if (prior > pq[i].second)
			break;
		pos++;
	}
	pq.insert(pos, std::make_pair(val, prior));
}

template<class T>
void PriorityQ<T>::pop()
{
	pq.pop_front();
}

template<class T>
bool PriorityQ<T>::empty() const
{
	return pq.empty();
}
