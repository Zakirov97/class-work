#include "rectangle.h"
#include <iostream>
rectangle::rectangle(double _length, double _width)
{

}
int main()
{
	rectangle r1;
	std::cout << "Enter your length -> ";
	r1.setLength(7);
	std::cout << std::endl;
	std::cout << "Enter your width -> ";
	r1.setWidth(4);
	r1.toString();
	system("pause");
	return 0;
}