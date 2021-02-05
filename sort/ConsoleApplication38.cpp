// ConsoleApplication38.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;
typedef unsigned char UI;
void RadixSort(int l, int r, int k,int *a)
{
    if (l >= r || k < 0) return;
    if (l < r && k >= 0)
    {
        int x = 1 << k;

        int i = l;
        int j = r;

        while (i <= j)
        {
            for (; (a[i] & x) == 0; i++);
            for (; (a[j] & x) != 0; j--);

            if (i <= j)
            {
                swap(a[i], a[j]);

                i++;
                j--;
            }
        }
        RadixSort(l, j, k - 1,a);
        RadixSort(i, r, k - 1,a);
    }
}

int Max(int* a, int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int Raz(int k)
{int n = 0;
while (k != 0)
{
    k /=2;
    n++;
}
return n;
}

int main()
{
    int n,k,t, event = 1;
    while (event == 1) {
        cout << "n=";
        cin >> n;
        int* a = new int[n];
        for (auto i = 0; i < n; i++) {
            a[i] = rand() % 100;
            cout << a[i] << " ";
        }
        cout << endl;
        k = Max(a, n);
        cout << k << endl;
        t = Raz(k);
        cout << "new=" << t << endl;
        RadixSort(0, n - 1, t, a);
        for (auto i = 0; i < n; i++)
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
