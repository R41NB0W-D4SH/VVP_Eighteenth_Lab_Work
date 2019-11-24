#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int n, m;
	cout << "Введите размер матрицы (M * N): ";
	cin >> m >> n;

	int **a = new int*[m];

	for (int i = 0; i < m; i++)
		a[i] = new int[n];

	for (int i = 0; i < m; i++)
	{
		cout << "Введите элемент " << i + 1 << " строки" << endl;
		for (int j = 0; j < n; j++)
		{
			cout << "Введите элемент: ";
			cin >> a[i][j];
		}
	}

	int *medium = new int[n];
	int *count = new int[n];

	for (int i = 0; i < n; i++)
	{
		medium[i] = 0;
		for (int j = 0; j < m; j++)
		{
			medium[i] += a[j][i];
		}
		medium[i] /= m;
	}
	for (int i = 0; i < n; i++)
	{
		count[i] = 0;
		for (int j = 0; j < m; j++)
		{
			if (a[j][i] > medium[i])
			{
				count[i]++;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << "Кол-во элементов больше среднего арифметического в " << i + 1 << " стоблце: " << count[i] << endl;
	}

	system("pause");
	return 0;
}
