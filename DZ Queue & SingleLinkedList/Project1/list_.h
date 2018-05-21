#pragma once
#include <iostream>
using namespace std;

template<class T>
class elem {
public:
	T obj;
	elem<T>* next;
	//friend class singleLinkedList<T>;
};


template<class T>
class singleLinkedList {
	int size;
	elem<T> *head;
	elem<T> *tail;
public:
	////////Homework
	elem<T>& searchElement(const T& obj)
	{
		elem<T> *tmp = nullptr;
		if(size == 0)
		return *tmp;
		tmp = head;
		for (int i = 0; i < size; i++)
		{
			if (tmp->obj == obj)
			{
				return *tmp;
			}
			tmp = tmp->next;	
		}
	}
	void replaceElement(const T& objKakoi, const T& obj)
	{
		elem<T> *tmp = nullptr;
		if (size == 0)
			return;
		tmp = head;
		for (int i = 0; i < size; i++)
		{
			if (tmp->obj == objKakoi)
			{
				tmp->obj = obj;
			}
			tmp = tmp->next;
		}
	}
	void deleteElement(const T& obj)
	{
		elem<T> *tmp = nullptr;
		elem<T> *tmp2 = nullptr;
		if (size == 0)
			return;
		tmp = head;
		for (int i = 0; i < size; i++)
		{
			tmp2 = tmp->next;
			if (tmp->obj == obj)
			{	
				erase(i);
				tmp = tmp2;
				--i;
			}
			else
				tmp = tmp->next;
		}
	}
	void back_print() {
		elem<T>*tmp = head;
		int cnt = 0;
		for (int i = 0; i < size; i++)
		{
			for (int i = 0; i < size-cnt-1; i++)
			{
				tmp = tmp->next;
			}
			cout << tmp->obj << " ";
			cnt++;
			tmp = head;
		}
	}
	////////
	int getSize()const
	{
		return size;
	}
	void push_back(const T& obj) {
		elem<T> *newElem = new elem<T>;

		newElem->obj = obj;
		newElem->next = nullptr;

		if (tail == nullptr) {
			head = tail = newElem;
		}
		else {
			tail->next = newElem;
			tail = newElem;
		}
		size++;
	}
	void push_front(const T & obj)
	{
		elem <T> * newElem = new elem <T>;
		newElem->obj = obj;
		if (head == nullptr)
		{
			head = tail = newElem;
		}
		else
		{
			newElem->next = head;
			head = newElem;
		}
		size++;
	}
	void pop_front()
	{
		if (head == nullptr)
		{
			return;
		}
		if (size == 1)
		{
			delete head;
			head = tail = nullptr;
			size = 0;
			return;
		}
		elem<T> * tmp = head;
		head = head->next;
		delete tmp;
		size--;
	}
	void pop_back() {
		if (tail == nullptr)
			return;
		if (tail == head) {
			delete head;
			head = tail = nullptr;
			size = 0;
			return;
		}
		elem<T> *tmp = head;
		while (tmp->next != tail)
			tmp = tmp->next;
		delete tail;
		tail = tmp;
		tail->next = nullptr;
		size--;
	}
	void insert(int pos, const T &a) {
		if (pos > size)
			return;
		if (pos == 0) {
			push_front(a);
			return;
		}
		if (pos == size) {
			push_back(a);
			return;
		}
		elem<T> *newElem = new elem<T>;
		elem<T> *tmp = head;
		for (size_t i = 0; i < pos - 1; i++)
		{
			tmp = tmp->next;
		}
		newElem->obj = a;
		newElem->next = tmp->next;
		tmp->next = newElem;
		size++;
	}
	void erase(int pos)
	{
		if (pos >= size)
			return;
		if (pos == 0) {
			pop_front();
			return;
		}
		if (pos == size - 1) {
			pop_back();
			return;
		}
		elem<T> *tmp = head;
		for (int i = 0; i < pos - 1; i++)
		{
			tmp = tmp->next;
		}
		elem<T>* r = tmp->next;
		tmp->next = tmp->next->next;
		delete r;
		size--;

	}
	void clear()
	{
		if (size != 0)
		{
			~singleLinkedList();
		}
	}
	bool empty()const
	{
		return size == 0;
	}
	void print() {
		elem<T>*tmp = head;
		while (tmp != nullptr) {
			cout << tmp->obj << " ";
			tmp = tmp->next;
		}
	}
	singleLinkedList() {
		size = 0;
		head = tail = nullptr;
	}
	~singleLinkedList()
	{
		while (tail != nullptr)
		{
			pop_front();
		}
	}
	singleLinkedList(const singleLinkedList<T>&obj) {
		size = 0;
		head = tail = nullptr;
		elem<T>*tmp = obj.head;
		while (tmp != nullptr)
		{
			push_back(tmp->obj);
			tmp = tmp->next;
		}
		//push_back()
	}
	singleLinkedList<T>& operator=(const singleLinkedList<T>&obj) {
		if (this == &obj)
			return *this;
		this->~singleLinkedList();
		elem<T>*tmp = obj.head;
		while (tmp != nullptr)
		{
			push_back(tmp->obj);
			tmp = tmp->next;
		}

		return *this;
	}
};
