#pragma once
#include "list_.h"
#include <queue>
#include <vector>

using namespace std;

class PrintQueue
{
private:
	int Size;
	list_<pair<int, string>> queue_;
public:
	int getSizeG() { return queue_.getSize(); };
	void addToQueue(int x, string Name)
	{
		queue_.push_back(make_pair(x, Name));
	}
	void showQueue()
	{
		sort(queue_.begin(), queue_.end());
		queue_.print();
	}
	PrintQueue()
	{
		Size = 0;
		queue_;
	}
	~PrintQueue()
	{

	}
};