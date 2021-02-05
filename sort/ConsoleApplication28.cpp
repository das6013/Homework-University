// ConsoleApplication28.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;
int lengaps(int size)
{
	int h = 0;
	int j = 0;
	while (3*h < size)
	{
		if (j % 2 == 0) { h = 9 * pow(2, j) - 9 * pow(2, j / 2) + 1;  }
		else { h = 8*pow(2,j)-6*pow(2,(j+1)/2)+1;}
		j++;
		
	}
	return j;
}
int* gaps(int size)
{
	int *c=new int[lengaps(size)];
	int q = lengaps(size);
	int j = 0;
	int h = 0;
	while (3 * h <= size)
	{
		if (j % 2 == 0) { h = 9 * pow(2, j) - 9 * pow(2, j / 2) + 1;  }
		else { h = 8 * pow(2, j) - 6 * pow(2, (j + 1) / 2) + 1;  }
		j++;
		c[q - 1] = h;
		q--;

	}
	return c;
}
void ShellSort(int * a,int n)
{
	int* step;
	step =gaps(n);
	//
	int gap, tmp, j;

	for (int k = 0; k < lengaps(n); k++)
	{
		gap = step[k];

		for (int i = gap; i < n; i++)
		{
			tmp = a[i];

			for (j = i; j >= gap && a[j - gap] > tmp; j -= gap)
			{
				a[j] = a[j - gap];
			}

			a[j] = tmp;
		}

	}
}






int main()
{
	int n, event = 1;
	while (event == 1) {
		cout << "n=";
		cin >> n;
		int* a = new int[n];

		for (auto i = 1; i < n; i++) {
			a[i] = rand() % 100;
			cout << a[i] << " ";
		}
		cout << endl;
		ShellSort(a, n);
		for (auto i = 1; i < n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
		cout << "print 0 to exit=";
		cin >> event;

	}
}
	
	
	


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
