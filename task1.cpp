#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, n, j, m, count;
	cout << "Введите M, (нечётное число): ";
	cin >> m;

	n = m / 2;

	int** a = new int*[m];

	for (i = 0; i < m; i++)
	{
		a[i] = new int[m];

		for (j = 0; j < m; j++)
		{
			cout << endl << "Введите элемент матрицы[" << i + 1 << "][" << j + 1 << "]: ";
			cin >> a[i][j];
		}
	}

	int** buff = new int*[m];

	for (i = 0; i < m; i++)
	{
		buff[i] = new int[m];
	}

	int mi = m - 1;
	int mj = m - 1;

	for (count = 0; count < n; count++)
	{
		for (i = 0; i < mi; i++)
		{
			j = 0;
			cout << a[i][j] << endl;
		}
		for (j = 0; j < mj; j++)
		{
			cout << a[i][j] << endl;
		}
		for (i; i > 0; i--)
		{
			cout << a[i][j] << endl;
		}
		for (j; j > 0; j--)
		{
			cout << a[i][j] << endl;
		}
		for (i = 1; i < mi; i++)
		{
			for (j = 1; j < mj; j++)
			{
				buff[i - 1][j - 1] = a[i][j];
			}
		}

		mi -= 2;
		mj -= 2;
		a = buff;
	}
	cout << a[0][0] << endl;

	system("pause");
	return 0;
}
