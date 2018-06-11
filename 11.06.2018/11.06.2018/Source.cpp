#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <fstream>

using namespace std;

int main()
{
	vector<int> v2{ 1,3,4,25,44,234,52,64, 98, 765, 999, 8989 };
	ofstream f("1.txt");
	ostream_iterator<int> out(f,"\t");
	copy(v2.begin(), v2.end(), out);
	f.close();


	vector<int> v;
	ifstream iF("1.txt");
	copy(istream_iterator<int>(iF), istream_iterator<int>(),back_inserter(v));
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << ' ';
	}
	iF.close();
	system("pause");
	return 0;
}