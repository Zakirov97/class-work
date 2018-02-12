#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int *a = new int[n];
	int *b = new int[n];
	for (int i = 0; i < n; i++)
	{
		b[i] = 1;
	}
	for (int i = 2; i < n; i++)
	{
		a[i] = i;
	}

	for (int i = 2; i <= n; i++)
	{
		for (int j = 2; j < n; ++j)
		{
			if (a[i] == 2 * j)
			{
				b[i] = 0;
			}
			if (a[i] == 3 * j)
			{
				b[i] = 0;
			}
			if (a[i] == 5 * j)
			{
				b[i] = 0;
			}
			if (a[i] == 7 * j)
			{
				b[i] = 0;
			}
		}
	}
	for (int  i = 2; i < n; i++)
	{
		if(b[i])
		cout << a[i] << ' ';
	}
	delete[] a,b;
	system("pause");
	return 0;
}