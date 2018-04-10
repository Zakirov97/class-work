#include <iostream>

using namespace std;

int main()
{
	int n = 5;
	int **a = new int*[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}



	system("pause");
	return 0;

}