// ConsoleApplication16.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <math.h>

using namespace std;
int z = 1;
void vivod (stack<int> st)
{
	stack<int> stk;
	stk = st;
	if (stk.empty()) return;
	while (!stk.empty()) {
		cout << stk.top();
		stk.pop();
	}
	

}
void hanoiskie_bashni(int d, int s1, int s2, int s3, stack<int>* st)
{
	
	int k;
	if (d == 0) return;
	
		hanoiskie_bashni(d - 1, s1, s3, s2, st);
		cout << z << ") Снимаем диск с " << s1 << " стержня и одеваем его на " << s2 << " стержень" << endl;
		z++;
		k = st[s1 - 1].top();
		st[s1 - 1].pop();
		st[s2 - 1].push(k);
		cout << "   Содержимое 1 стержня: "; vivod(st[0]);
		cout << "   Содержимое 2 стержня: "; vivod(st[1]);
		cout << "   Содержимое 3 стержня: "; vivod(st[2]);
		cout << endl;
		hanoiskie_bashni(d - 1, s3, s2, s1, st);
		
	

}
int main() {
	int d, s1=1, s2=2, s3=3, c = 0;
	stack<int> stk[4];
	setlocale(LC_ALL, "rus");
	cout << "Количество дисков" << endl;
	cin >> d;
	
	for (int i = d; i > 0; i--)
	{
		stk[0].push(i);
	}
	
	hanoiskie_bashni(d, s1, s2, s3, stk);
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
