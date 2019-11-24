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
			cout << "Введите элементы: ";
			cin >> a[i][j];
		}
	}
	bool percent = false;
	int column = 0;
	for (int i = 0; i < n; i++)
	{
		percent = false;
		for (int j = 0; j < m; j++)
		{
			if (a[j][i] % 2 == 1)
			{
				percent = true;
				break;
			}
		}
		if (percent == true)
		{
			column = i + 1;
			break;;
		}
	}

	cout << "Столбец: " << column << endl;

	system("pause");
	return 0;
}
