// ConsoleApplication27.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
using namespace std;
/*
*
*Created by UnitedTimur
*
*/


int SearchBM(char* String, char* Subject);

int main(void) {

	char String[255];
	char Subject[255];
	int event = 0;
	while (event != 1) {
	cout<<"Enter the String:"<<endl;
	cin>>(String);

	cout<<"Enter the Subject:"<<endl;
	cin>>(Subject);

	if (SearchBM(String, Subject) != -1) {
		cout<<"match index ="<< SearchBM(String, Subject)<<endl;
	}
	else {
		cout<<"Error #1. Try again ;"<<endl;
	}

	unsigned int Time = clock() / 1000;
	printf("Time work this program equally %d's\n", Time);

	cout << "print 1 that exit";
}
}

int SearchBM(char* String, char* Subject) {

	 int SizeString = strlen(String); /*размер строки*/
	 int SizeSubject = strlen(Subject);/*размер искомого элемента*/

	int Tab[256];/*Словарь Элементов*/

	for (int i = 0; i < 256; i++) {
		Tab[i] = SizeSubject; /*Заполнения словаря на длину элемента для последущего определения шага*/
	}

	for (int i = 0; i < SizeSubject - 1; i++) {
		Tab[Subject[i]] = SizeSubject - 1 - i;/*Определения шага */
	}

	int key = 0,
		j = SizeSubject - 1,
		i = SizeSubject - 1;/*Вычитаем 1 до последущего работы с массивом так нумерация начинается с нуля*/

	while (i < SizeString) {

		key = i;
		j = SizeSubject - 1;

		while (String[key] == Subject[j])/*While на проверку вхождения*/
		{
			key--;
			j--;
		}

		if (j < 0) {
			return i - SizeSubject + 1;
		}

		i += Tab[String[key]];

	}

	return -1;

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
