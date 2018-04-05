#pragma once
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, s2;
	char ch;
	int numb1 = 0, numb2 = 0, summ = 0, sub = 0;
	cin >> s1 >> ch >> s2;

	int jkl = 1;
	if (ch == '+')
	{
		for (int i = 1; i <= s1.size(); i++)
		{
			numb1 = (s1[s1.size() - i]) - 48;
			numb2 = (s2[s2.size() - i]) - 48;
			jkl = 1;
			for (int j = 1; j < i; j++)
			{
				jkl *= 10;
			}
			numb1 *= jkl;
			numb2 *= jkl;

			summ = summ + numb1 + numb2;
		}
	cout << summ << endl;
	}
	else
	{
		for (int i = 1; i <= s1.size(); i++)
		{
			numb1 = (s1[s1.size() - i]) - 48;
			numb2 = (s2[s2.size() - i]) - 48;
			jkl = 1;
			for (int j = 1; j < i; j++)
			{
				jkl *= 10;
			}
			summ = numb1 - numb2;
			summ *= jkl;
			sub = summ + sub;
			
		}
		cout << sub << endl;
	}
	system("pause");
	return 0;
}

//123
//456