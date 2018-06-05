#include "String_.h"

void string()
{
	String_ s("ggg");
	String_ s2("Hello!");
	s += s2;
	std::cout << s;
}

int main()
{
	//string();
	String_ s = "bekarov";
	char s2 = s.at(10);
	std::cout << s2;
	system("pause");
	return 0;
}