#include <fstream>
#include <iostream>
#include<string>
using namespace std;

int main(int argc, char* argv[])
{
    int n, g = 0, x = 1;
    setlocale(LC_ALL, "rus"); // корректное отображение Кириллицы
    char buff[50]; // буфер промежуточного хранения считываемого из файла текста
    ifstream fin("tlist.txt"); // открыли файл для чтения

    while (!fin.eof()) {
        fin.getline(buff, 50);
        n = strlen(buff);
        for (int i = 0; i < n / 2; i++)
            if (buff[i] == buff[n - 1 - i])  g++;
        if (g == n / 2) cout << x << " stroka" << " palindrom " << buff << endl;
        g = 0;
        x++;



    }
    fin.close(); // закрываем файл
}
