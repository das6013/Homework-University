#include "pch.h"
#include<iostream>
#include <ctime>
using namespace std;
int cost(int* p, int n, int **a)
{
    int m=0;
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1) m += a[p[i]-1][p[0]-1];
        else m += a[p[i]-1][p[i + 1]-1];
    }
    return m;
}
void Inversion(int* p, int n, int i)
{
    int j, t, temp;
    for (j = i + 1, t = n - 1; j < t; j++, t--)
    {
        temp = p[j];
        p[j] = p[t];
        p[t] = temp;
    }
}
bool Permutation(int* p, int n)
{
    int i, j, t, temp, flag = 0;
    for (t = n - 2; t > 0 && flag == 0; t--)
        if (p[t] < p[t + 1])
        {
            i = t; 	flag = 1;
            for (j = n - 1; j > i; j--)
                if (p[i] < p[j])
                {
                    temp = p[i];
                    p[i] = p[j];
                    p[j] = temp;
                    Inversion(p, n, i);
                    break;
                }
        }
    if (flag)return true;
    else return false;
}




int main()
{
    int n,k;
    srand(time(NULL));
    cout << "n=";
    cin >> n;
    int ** a = new int*[n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            if (i == j) a[i][j] = 0;
            else a[i][j] = rand() % 100+1;
            cout << a[i][j]<<" ";
        }
        cout << "\n";
    }
    int** b = new int* [n];
    for (int i = 0; i < n; i++) {
        b[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            b[i][j] = a[i][j];
        }
    }
    cout << "k=";
    cin >> k;
    int* p = new int[n];
    int* pmin = new int[n];
    for (int i = 0; i < n; i++)
    {
        p[i] = i;
        if (i == 0) p[i] = k;
        if (i >= k)  p[i] = i + 1;
        
        
    }
    for (int i = 0; i < n; i++)
    {
        pmin[i] = 0;
    }
    int min=0,q=1;
    min = cost(p, n, a);
    cout << "min=" << min << endl;
    for (int i = 1; i < n; i++)
        q *= i;
    for (int i = 0; i < q; i++)

    {
        int z = 0;
        for (int i = 0; i < n; i++)
            cout << p[i] << " ";
        z = cost(p, n, a);
        cout << "cost=" << z << endl;
        if (z <= min) {
            min = z;
            for (int i = 0; i < n; i++)
                pmin[i] = p[i];
        }
        Permutation(p, n);
        
    }
        
    cout << "min way:";
    for (int i = 0; i < n; i++)
       cout << pmin[i] << " ";
    cout << "cost=" << min << endl;
    cout << "3 evristika" << endl;
    int y = 0,h=0,min1=0;
    for (int i = 0; i < n; i++)
        a[i][0] = 0;
    while (y < n )
    {
        int min2=101,u;
        pmin[y] = h + 1;
        for (int j = 0; j < n; j++)
        {
            if (a[h][j]!=0) 
                if (min2 > a[h][j])
                {
                    u = j;
                    min2 = a[h][j];
                    cout << "h=" << h << " " << "min=" << min2 << endl;
                }
            
          
        }
        for (int j = 0; j < n; j++)
            a[h][j] = 0;
        h = u;
        for (int i = 0; i < n; i++)
            a[i][u] = 0;
        y++;
    }
    for (int i = 0; i < n; i++)
        cout << pmin[i] << " ";
    cout <<"min="<< cost(pmin, n, b);

    for (int i = 0; i < n; ++i)
    {
        delete[] a[i]; delete b[i];
    }
    delete a;
    delete b;
    delete p;
    delete pmin;

    return 0;
}
