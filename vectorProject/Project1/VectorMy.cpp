#include "VectorMy.h"
#include <vector>
VectorMy::VectorMy()
{
	this->size = 0;
	this->arr = nullptr;
}

VectorMy::VectorMy(int size, int num)
{
	this->arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		this->arr[i] = num;
	}
}


VectorMy::~VectorMy()
{
	delete[] arr;
}

void VectorMy::push_back(int num)
{
	int *arr1;
	if (size == 0)
	{
		arr1 = new int[1];
		arr1[0] = num;
	}
	else
	{
		arr1 = new int[size + 1];
		for (int i = 0; i < size; i++)
		{
			arr1[i] = arr[i];
		}
		arr1[size] = num;
	}
	++size;
	delete[] arr;
	this->arr = arr1;
}

void VectorMy::pop_back()
{
	//если нету элементов выходим из метода
	if (size == 0) return;
	
	if (size == 1)
	{
		delete[] arr;
		arr = nullptr;
		size = 0;
		return;
	}
	int *arr1 = new int[size - 1];
	for (int i = 0; i < size-1; i++)
	{
		arr1[i] = arr[i];
	}
	delete[] this->arr;
	this->arr = arr1;
	size--;
}

void VectorMy::print()
{
	for (size_t i = 0; i < size; i++)
	{
		cout << this->arr[i] << " ";
	}
	cout << endl;

}

void VectorMy::clear()
{
	delete[] arr;
	arr = nullptr;
	size = 0;
}

bool VectorMy::isEmpty()
{
	return size == 0;
}

int VectorMy::getSize()
{
	return this->size;
}

VectorMy::VectorMy(const VectorMy & ad)
{
	this->size = ad.size;
	if (this->size == 0) {
		this->arr = nullptr;
    

	}
	else
	{
		this->arr = new int [this->size];
		for (size_t i = 0; i < this->size; i++)
		{
			this->arr[i] = ad.arr[i];

		}
	}
}
