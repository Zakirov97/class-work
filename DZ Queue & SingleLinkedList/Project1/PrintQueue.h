#pragma once
#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

class PrintQueue
{
private:
	int Size;
	vector<pair<int, string>> queue_;
public:
	int getSize() { return queue_.size(); };
	void addToQueue(int x, string Name);
	void showQueue();
	PrintQueue();
	~PrintQueue();
};