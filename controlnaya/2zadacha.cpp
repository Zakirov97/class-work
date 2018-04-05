#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	//for (int i = 2; i<n; i++)
	//{
	//	bool prime = true;
	//	for (int j = 2; j*j <= i; j++)
	//	{
	//		if (i % j == 0)
	//		{
	//			prime = false;
	//			break;
	//		}
	//	}
	//	if (prime) cout << i << " ";
	//}
	vector<int>prime;
	vector<int>numb;
	for (int i = 0; i <= n; i++)
	{
		prime.push_back(i);
		numb.push_back(1);
	}
	for (int i = 2; i <= n; i++)
	{
		if (prime[i] % 2 == 0 && prime[i] != 2)
		{
			numb[i] = 0;
		}
		if (prime[i] % 3 == 0 && prime[i] != 3)
		{
			numb[i] = 0;
		}
		if (prime[i] % 5 == 0 && prime[i] != 5)
		{
			numb[i] = 0;
		}
		if (prime[i] % 7 == 0 && prime[i] != 7)
		{
			numb[i] = 0;
		}
		if (numb[i])
		{
			cout << i << ' ';
		}

	}
	system("pause");
	return 0;
}