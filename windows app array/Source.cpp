// stdafx.cpp : source file that includes just the standard includes
// ConsoleApplication2.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "Header.h"
void Arraya::ShiftLeft(int pos)
{int t;
		for (int i=pos;i<n-1;i++)
		{t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
		}
}
Arraya:: Arraya(int _mem)
{mem=_mem;n=0;a=new int[mem];
}

Arraya:: Arraya(int *_a,int _n)
{ mem = _n +10; n = _n; a=new int [mem];
for(int i=0; i<n; i++) a[i]=_a[i];}

Arraya:: Arraya(const Arraya &X)
{mem=X.n+10;n=X.n;a=new int[n];
for (int i=-0;i<n;i++)
	a[i]=X.a[i];
}
Arraya &Arraya:: operator =(const Arraya &X)
{if (this!=&X)
{
	if (mem<X.n)
		{
			delete []a;
			mem=X.n+10;
			n=X.n;
			a =new int [n];
			for (int i=-0;i<n;i++)
				a[i]=X.a[i];
	}
	else {n=X.n;
	a =new int [n];
	for (int i=-0;i<n;i++)
		a[i]=X.a[i];
	}
}
return *this;
}
Arraya::~Arraya()
{delete []a;
}
void Arraya::Scan()
{cout<<"n=";cin>>n;
if (n>mem){delete []a;mem=n+10;a=new int[mem];}
cout<<"Mas:";
for (int i=-0;i<n;i++)
	cin>>a[i];
}
void Arraya::Print()
{for (int i=-0;i<n;i++)
	cout<<a[i]<<" ";
}
int &Arraya:: operator [] (int i)
{if (i<0||i>n) {cout<<"error";return a[0];}
return a[i];
}
int Arraya::FindKey(int k)
{for (int i=-0;i<n;i++)
if (k==a[i]) return i;
return -1;
}
Arraya &Arraya::operator+=(int k)
{int i ,*t;
mem=n+10;
t=new int [n+1];
for (int i=0;i<n;i++)
	t[i]=a[i];
t[n]=k;
n++;
a=t;
return *this;
}
Arraya Arraya::operator +(int k)
{Arraya Res(n+1);
for (int i=-0;i<n;i++)
{Res.a[i]=a[i];}
Res.a[n]=k;
Res.mem=n+10;
Res.n=n+1;
return Res;
}
Arraya &Arraya::operator+=(Arraya X)
{int i,*t,q=0;
mem=n+X.n+10;
t=new int[n+X.n];
for (int i=0;i<n;i++)
	t[i]=a[i];
for (int i=n;i<n+X.n;i++)
{t[i]=X.a[q];q++;}
n+=X.n;
a=t;
return *this;
}
Arraya Arraya::operator +(Arraya X)
{Arraya Res(n+X.n);
int q;
for (int i=0;i<n;i++)
{Res.a[i]=a[i];}
for (int i=n;i<n+X.n;i++)
{Res.a[i]=X.a[q];q++;}
Res.n=n+X.n;
Res.mem=n+X.n+10;
return Res;
}

Arraya &Arraya::operator -=(int k)
{int pos=FindKey(k);
if (pos==-1) {cout<"error";return *this;}
ShiftLeft(pos);n--;
return *this;
}
Arraya Arraya::operator -(int k)
{Arraya Res(n);
Res.mem+=10;
for (int i=0;i<k;i++)
	Res.a[i]=a[i];
for (int i=k;i<n-1;i++)
	Res.a[i]=a[i+1];
Res.n=n-1;
return Res;
}
Arraya &Arraya::DelPosEq(int pos)
{if (pos<0) {cout<"error";return *this;}
	ShiftLeft(pos);n--;
	return *this;
}
Arraya Arraya::DelPosNew(int pos)
{Arraya Res(n-1);
if (pos<0) {cout<"error";return *this;}
for (int i=0;i<n;i++)
	if (i==pos) i++;
	else Res.a[i]=a[i];

Res.n=n-1;
Res.a[Res.n-1]=a[n-1];
return Res;
}
bool Arraya::operator==(Arraya X)
{if (X.n==n) 
{for (int i=0;i<n;i++)
if (a[i]!=X.a[i]) return false;
return true;
}
else return false;
}
bool Arraya::operator!=(Arraya X)
{if (X.n==n) 
{for (int i=0;i<n;i++)
if (a[i]!=X.a[i]) return true;
return false;
}
else return true;
}
int Arraya::Max()
{int max=a[0];
for (int i=0;i<n;i++)
	if (max<a[i]) max=a[i];
return max;
}
int Arraya::Min()
{int min=a[0];
for (int i=0;i<n;i++)
	if (min>a[i]) min=a[i];
return min;
}
void Arraya::Sorting()
{int t;
for (int i=0;i<n-1;i++)
	for (int j=i;j<n;j++)
		if (a[i]>a[j])
		{t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
}
istream& operator >>(istream& r,Arraya &a)
{int n;
	a.Scan();
return r;
}
ostream& operator<<(ostream& f,Arraya &a)
{a.Print();
return f;
}