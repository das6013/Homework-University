// ConsoleApplication36.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "listr.h"

int main()
{
    List s1, s2;
    cout << "firs test" << endl;
    s1.AddToHead(1);
    s1.AddTail(10);
    s1.print();
    cout << endl;
    cout << endl;
    cout << "second test" << endl;
    for (int i = 0; i < 6; i++)
        s2.AddToHead(rand() % 100);
    cout << s2 << endl;
    cout << endl;
    cout << "max=" << s2.Max() << endl;
    cout << "min=" << s2.Min() << endl;
    cout << endl;
    cout << "Third test" << endl;
    cout << "s[2]=" << s2[2] << endl;
    s2.Delete(s2[2]);
    if (s2[5] == -1) cout << "List<6" << endl;
    else cout << "List>6" << endl;
    s2.print();
    cout << endl;
    cout << endl;
    cout << "4 test" << endl;
    cout << "s2[6]=" << s2[6] << endl;

    s2.DelHead();
    s2.print();
    cout << endl;
    cout << endl;
    cout << "Fifth test" << endl;
    List s3(s1);
    if (s3 == s1) cout << "s1==s3"<<endl;
    else  cout << "s1!=s3" << endl;
    cout << "Six test" << endl;
    s3.DelHead();
    s3.Delete(10);
    if (s3.IsEmpty()==true) cout << "s3 nope" << endl;
    else  cout << "S3 no nope" << endl;
    cout << endl;
    cout << endl;
    cout << "Seven test" << endl;
    int k4[6];
    for (int i = 0; i < 6; i++)
        k4[i]=rand()%20;
    List s4(k4, 6);
    s4.print();
    if (s4.FindPos(25) == 00000000) cout << "No" << endl;
    else cout << "Yes" << endl;
    s4.Insert(4, 25);
    cout << s4<<endl;
    cout << endl;
    cout << endl;
    cout << "8 test" << endl;
    List s5(s2);
    if (s5.FindPos(4) != 00000000) s4.Delete(4);
    else s5.AddTail(4);
    s5.print();
    cout << endl;
    cout << endl;
    cout << "9 test" << endl;
    List s6;
    for (int i = 0; i < 4; i++)
    {
        int k;
        cin >> k;
        s6.AddTail(k);
    }
    s5 = s5.Addhead(s6);
    s5.print();
    cout << endl;
    cout << endl;
    if (s5 == s4) cout << "s5==s4" << endl;
    else  cout << "s5!=s4" << endl;
    cout << endl;
    cout << endl;
    cout << "10 test" << endl;
    s5=s5.Addtail(s4);
    s5.print();
    cout << endl;
    cout << endl;
    s5=s5.Addhead(s1);
    s5.print();

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
