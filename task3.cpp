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
	{ 
		a[i] = new int[n];
	}

	for (int i = 0; i < m; i++)
	{
		cout << "Введите элементы " << i + 1 << " строки" << endl;
		for (int j = 0; j < n; j++)
		{
			cout << "Введите элемент: ";
			cin >> a[i][j];
		}
	}

	int *b = new int[n];

	for (int i = 0; i < n; i++)
	{
		b[i] = 1;
		for (int j = 0; j < m; j++)
		{
			b[i] *= a[j][i];
		}
	}

	int min_i = 0;

	for (int i = 1; i < n; i++)
	{
		min_i = b[min_i] > b[i] ? i : min_i;
	}

	cout << "Минимал: " << min_i + 1 << endl << "Mинимал произведение: " << b[min_i] << endl;

	system("pause");
	return 0;
}
