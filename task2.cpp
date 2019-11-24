#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int n, m, k, sum = 0, pr = 1;

	cout << "Введите размер матрицы (M * N): ";
	cin >> m >> n;

	cout << "Введите K (1 <= K <= M): ";
	cin >> k;

	if (k >= 1 && k <= m)
	{ 
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

		for (int i = 0; i < n; i++)
		{
			sum += a[k - 1][i];
			pr *= a[k - 1][i];
		}

		cout << "Сумма: " << sum << endl;
		cout << "Произведение: " << pr << endl;
	}
	else
	{
		cout <<"Вы ввели неверное значение K. Попробуйте еще раз, следуя условиям." << endl;
	}

	system("pause");
	return 0;
}
