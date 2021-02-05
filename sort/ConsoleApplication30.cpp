// ConsoleApplication30.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int Parent(int i) { return (i - 1) / 2; }
int LeftChild(int i) { return 2 * i + 1; }
void SiftDown(int start, int end, int *a) // [start, end)
{
	int root = start;//начальная точка сортировке 

	int tmp = a[root];//Стартовое значение 

	for (int child = LeftChild(root); child < end; child = LeftChild(root))
	{
		if (child + 1 < end && a[child] < a[child + 1])
		{
			child++;
		}

		if (tmp >= a[child])
		{
			break;
		}

		a[root] = a[child];

		root = child;
	}

	a[root] = tmp;
}
void Heapify(int n,int * a)
{
	for (int start = Parent(n - 1); start >= 0; start--)
	{
		SiftDown(start,n,a);
	}
}
void Sort(int n, int* a)
{
	Heapify(n, a);

	for (int end = n - 1; end > 0; end--)
	{
		swap(a[0], a[end]);

		SiftDown(0, end,a);

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
		Sort(n, a);
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
