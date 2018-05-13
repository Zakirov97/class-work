#include "House.h"



House::House()
{
}

House::House(string address, int floor, int countOfRoom, int area)
{
	this->address = address;
	this->floor = floor;
	this->countOfRoom = countOfRoom;
	this->area = area;
}


House::~House()
{
}
