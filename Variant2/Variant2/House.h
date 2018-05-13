#pragma once
#include <string>
#include <vector>
using namespace std;
class House
{
	string address;
	int floor, countOfRoom, area;
public:
	int getCountOfRoom() { return countOfRoom; };
	int getFloor() { return floor; };
	int getArea() { return area; };
	House();
	House(string address, int floor, int countOfRoom, int area);
	~House();
};

