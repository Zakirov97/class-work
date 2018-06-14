#include <iostream>
#include <vector>
#include <map>
#include <ctime>
#include <string>
#include <fstream>
#include <iterator>

using namespace std;	

int main()
{
	int choose;
	string word;
	map<string, string> m;
	setlocale(0, "");
	system("chcp 1251");
	system("cls");
	cout << "From english to russian enter \"1\"" << endl;
	cout << "\nС русского на английский \"2\"" << endl;
	cin >> choose;
	if (choose == 1)
	{
		cout << "Enter your word" << endl;
		cin >> word;
		ifstream f("fromEngToRu.csv");
		string s1, s2;
		while (!f.eof())
		{
			s1.clear();
			s2.clear();
			getline(f, s1, ';');
			getline(f, s2, ';');
			if (s1[0] == '\n')
				s1.erase(0, 1);
			m.insert(make_pair(s1, s2));
		}
		map<string, string>::iterator it;
		it = m.find(word);
		if (it == m.end())
			cout << "This word is not found in dictionary" << endl;
		else
			cout << "Translate word is - " << it->second << endl;
	}
	else if(choose == 2)
	{
		cout << "Введите ваше слово - " << endl;
		cin >> word;
		ifstream f("fromRuToEng.csv");
		string s1, s2;
		while (!f.eof())
		{
			s1.clear();
			s2.clear();
			getline(f, s1, ';');
			getline(f, s2, ';');
			if (s1[0] == '\n')
				s1.erase(0, 1);
			m.insert(make_pair(s1, s2));
		}
		map<string, string>::iterator it;
		it = m.find(word);
		if (it == m.end())
			cout << "Это слово не найдено в словаре" << endl;
		else
			cout << "Ваше слово - " << it->second << endl;
	}
	system("pause");
	return 0;
}