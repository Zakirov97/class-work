#include "PrintQueue.h"

void PrintQueue::addToQueue(int x, string Name)
{
	queue_.push_back(make_pair(x, Name));
}

void PrintQueue::showQueue()
{
	sort(queue_.begin(), queue_.end());
	for (int i = 0; i <queue_.size(); i++)
		cout << queue_[i].first << " " << queue_[i].second << endl;
}

PrintQueue::PrintQueue()
{
	queue_;
	Size = 0;
}

PrintQueue::~PrintQueue()
{
}