﻿// ConsoleApplication10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
struct STUD 
{ char name[20]; int group, mark[5]; };
int main()

{
    int i = 0, z = 0, p, c = 0, d = 0;
    char x[22];
    FILE* f;
    STUD kurs[10];
    f = fopen("data.txt", "r");
    if (f == NULL)//проверка на файл
    {
        perror("Error occured while opening file");
        return 1;
    }
    while (!feof(f)) {//запись в массив
        fscanf(f, "%s", &x);
        for (int j = 0; j < 20; j++)
        {
            kurs[i].name[j] = x[j];
        }
        fscanf(f, "%d", &z);
        kurs[i].group = z;
        for (int j = 0; j < 5; j++) {
            fscanf(f, "%d", &p);
            kurs[i].mark[j] = p;
        }
        i++;
    }
    for (int i = 0; i < 10; i++)//счетчик макс кол 2
    {
        for (int j = 0; j < 5; j++)
        {
            if (kurs[i].mark[j] == 2) c++;
        }
        if (d < c) d = c;
        c = 0;
    }
    for (int i = 0; i < 10; i++)//проверка на макс и вывод учащевоеся
    {
        for (int j = 0; j < 5; j++)
        {
            if (kurs[i].mark[j] == 2) c++;
        }
        if (d == c) { cout << kurs[i].name << kurs[i].group << endl; };
        c = 0;
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