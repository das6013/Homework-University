#pragma once
#pragma once
#include <iostream>
#include <cmath>
using namespace std;
template <class T> class Arraya {
private:
	T* a;
	int n;
	int mem;
	void shiftleft(int pos);// сдвиг влево начиная с позиции pos+1
public:
	Arraya(int _n = 1);
	Arraya(T* b, int m);
	Arraya(const Arraya<T>&);
	Arraya<T>& operator=(const Arraya<T>&);
	~Arraya();
	void scan();
	void print();
	T& operator[](int);
	int findKey(T);// возвращает индекс элемента или -1, если элемента нет
	Arraya<T>& operator+=(T);
	Arraya<T> operator+(T);
	Arraya<T>& operator+=(Arraya<T>);
	Arraya<T> operator+(Arraya<T>);
	Arraya<T>& operator-=(T);
	Arraya<T> operator-(T);// b=*this-x
	Arraya<T>& DelPosEq(int);// возвращает *this
	Arraya<T>& DelPosNew(int);// возвращает новый массив
	bool operator==(Arraya<T>);
	bool operator!=(Arraya<T>);
	int max();//возвращает индекс макс.
	int min();//возвращает  индекс мин.
	void sortShella();
	template<class T>friend  ostream& operator << (ostream& r, Arraya<T>& x);
	template<class T>friend  istream& operator >> (istream& r, Arraya<T>& x);
};
template <class T> Arraya<T>::Arraya(int _n) {
	mem = _n+10; n = _n; a = new T[mem];
}
template <class T>Arraya<T>::Arraya(T* _a, int _m) {
	mem = _m + 10; n = _m; a = new T[mem];
	for (int i = 0; i < n; i++) a[i] = _a[i];
}
template <class T>Arraya<T>::Arraya(const Arraya<T>& X ) {
	mem = X.mem; n = X.n; a = new T[mem];
	for (int i = -0; i < n; i++)
		a[i] = X.a[i];
	

}
template <class T> Arraya<T>& Arraya<T>::operator=(const Arraya<T>& x) {
	if (this != &x) {
		delete[]a;
		n = x.n;
		mem = x.mem;
		a = new T[mem];
		for (int i = 0; i < n; i++) {
			a[i] = x.a[i];
		}
	}
	return *this;

}
template <class T>Arraya<T>::~Arraya() {
	delete[]a;
}
template <class T> void Arraya<T>::scan() {
	cout << "n="; cin >> n;
	if (n > mem) { delete[]a; mem = n + 10; a = new T[mem]; }
	cout << "Mas:";
	for (int i = -0; i < n; i++)
		cin >> a[i];
	}
template <class T>void Arraya<T>::print() {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

}
template <class T>T& Arraya<T>::operator[](int i) {
	if (i<0 || i>n) { cout << "error"; return a[0]; }
	return a[i];
}
template <class T>Arraya<T>& Arraya<T>::operator += (T k) {
	int i; T* t;
	if (mem < n) mem = n + 10;
	t = new T[mem];
	for (int i = 0; i < n; i++)
		t[i] = a[i];
	t[n] = k;
	n++;
	a = t;
	return *this;
}
template <class T>Arraya<T> Arraya<T>::operator + (T k) {
	Arraya Res(n);
	for (int i = 0; i < n; i++)
	{
		Res.a[i] = a[i];
	}
	Res.a[n] = k;
	return Res;
}
template <class T> Arraya<T>& Arraya<T>::operator +=(Arraya<T> X) {
	int i, q = 0;
	T * t;
	if (mem < n + X.n) mem = n + X.n + 10;
	t = new T[mem];
	for (int i = 0; i < n; i++)
		t[i] = a[i];
	for (int i = n; i < n + X.n; i++)
	{
		t[i] = X.a[q]; q++;
	}
	n += X.n;
	a = t;
	return *this;
}
template <class T> Arraya<T> Arraya<T>::operator+(Arraya<T> z) {
	Arraya res(n + z.n);
	for (int i = 0; i < n; i++) {
		res.a[i] = a[i];
	}
	for (int i = n; i < n + z.n; i++) {
		res.a[i] = z.a[i - n];
	}
	return res;
}
//template <class T>istream& operator >> (istream& r, Arraya<T>& x) {
//	x.scan(x.n);
//	return r;
//}
//template <class T>ostream& operator << (ostream& r, Arraya<T> &x) {
//	for (int i = 0; i < x.n; i++) {
//		r << x.a[i] << " ";
//	}
//	return r;
//
//}
template <class T> ostream& operator << (ostream& r, Arraya<T>& x) {
	cout << "Your Arraya: ";
	for (int i = 0; i < x.n; i++)
		cout << x.a[i] << ' ';
	cout << "\n";
	return r;
}

template <class T> istream& operator>> (istream& r, Arraya<T>& x) {
	cout << "enter the number of elements";
	int m;
	cin >> m;
	cout << "enter" << m << "elements: ";
	for (int i = 0; i < m; i++)
		r >> x.a[i];
	return r;
}
//template <class T>istream& operator >> (istream& r, Arraya<T>& x) {
//	int m;
//	cout << "enter the number of elements:";
//	cin >> m;
//	cout << "enter" << m << "elements";
//	x.n = m;
//	for (int i = 0; i < x.n; i++)
//	{
//		r >> x.a[i];
//	}
//	return r;
//}
template <class T>int Arraya<T>::findKey(T x) {
	for (int i = 0; i < n; i++)
		if (x == a[i]) return i;
	return -1;
}
template <class T>void Arraya<T>::shiftleft(int pos) {
	int t;
	for (int i = pos; i < n - 1; i++)
	{
		t = a[i];
		a[i] = a[i + 1];
		a[i + 1] = t;
	}
}
template <class T>Arraya<T>& Arraya<T>::operator-=(T k) {
	int i;
	int pos = this->findKey(k);
	if (pos == -1) {
		return *this;
	}
	else
	{
		for (i = pos; i < n - 1; i++) {
			a[i] = a[i + 1];
		}
		n--;
		return *this;
	}

	
}
template <class T>Arraya<T> Arraya<T>::operator-(T key) {
	Arraya Res(n);
	int pos = this->findKey(key);
	if (pos == -1) {
		return *this;
	}
	else
	{
		for (int i = 0; i < pos; i++) {
			Res.a[i] = a[i];
		}
		for (int i = pos; i < n - 1; i++) {
			Res.a[i] = a[i + 1];
		}
		Res.n = n - 1;
	}
	return Res;
}
template <class T>Arraya<T>& Arraya<T>::DelPosEq(int in) {
	if (in >= n || in < 0) {
		return *this;
	}
	else
	{
		for (int i = in; i < n - 1; i++) {
			a[i] = a[i + 1];
		}
		n--;
		return *this;
	}

}

// возвращает *this
template <class T>Arraya<T>& Arraya<T>::DelPosNew(int in) {
	Arraya res(n + z.n);
	if (in >= n || in < 0) {
		return *this;
	}
	else
	{
		for (int i = 0; i < in; i++) {
			res.a[i] = a[i];
		}
		for (int i = in; i < n - 1; i++) {
			res.a[i] = a[i + 1];
		}
		res.n = n - 1;

		return res;
	}

}// возвращает новый массив


// возвращает новый массив
template <class T>bool Arraya<T>::operator==(Arraya<T> X) {
	if (X.n == n)
	{
		for (int i = 0; i < n; i++)
			if (a[i] != X.a[i]) return false;
		return true;
	}
	else return false;
}
template <class T>bool Arraya<T>::operator!=(Arraya<T> X) {
	if (X.n == n)
	{
		for (int i = 0; i < n; i++)
			if (a[i] != X.a[i]) return true;
		return false;
	}
	else return true;

}
template <class T>int Arraya<T>::max() {
	int imax = 0;
	T max = a[imax];
	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
			imax = i;
		}
	}
	return imax;
}//возвращает индекс макс.
template <class T>int Arraya<T>::min() {
	int imin = 0;
	T min = a[imin];
	for (int i = 0; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
			imin = i;
		}
	}
	return imin;
}//возвращает  индекс мин.
template <class T>void Arraya<T>::sortShella() {
	int h = n, j;
	T t;
	h = h / 2;
	while (h > 0) {
		for (int i = 0; i < n - h; i++)
		{
			j = i;
			while (j >= 0 && a[j] > a[j + h])
			{
				t = a[j];
				a[j] = a[j + h];
				a[j + h] = t;
				j--;
			}
		}
		h = h / 2;
	}
}


