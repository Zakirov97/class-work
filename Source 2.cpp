#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	bool arr[256];
	for (int i = 0; i < 255; ++i)
	{
		arr[i] = false;
	}
	sort(s.begin(), s.end());

	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == s[i + 1])
		{
			cout << "no";
			return 0;
		}
	}
	cout << "yes";

	cin.get();
	return 0;
}