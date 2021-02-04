#include "pch.h"
#include "Header.h"
using namespace System;

int main()
{
	Arraya<char> mas1, mas2;
	cout << "1) ";
	mas1.scan();
	cout << "mas1= ";
	mas1.print();
	cout << endl;
	cout << "2) mas2= ";
	mas2 = mas1;
	//mas2.print();
	cout << mas2;
	cout << endl;
	cout << "3) ";
	if (mas1 == mas2) {
		cout << " True";
	}
	else
		if (mas1 != mas2) {
			cout << "False";
		}
	cout << endl;
	mas1 += '6';
	cout << "4) mas1= ";
	mas1.print();
	cout << endl;
	if (mas1 == mas2) {
		cout << "True";
	}
	else
		if (mas1 != mas2) {
			cout << "False";
		}
	cout << endl;
	Arraya<char> mas3;
	cout << "5) ";
	mas3 = mas1 + '7';
	cout << "mas3= ";
	cout << mas3;
	cout << endl;
	cout << "6) ";
	mas3.DelPosEq(0);
	cout << "mas3= ";
	cout << mas3;
	cout << endl;
	mas3.DelPosEq(1);
	Arraya<char> mas4;
	Arraya<char> z;
	z = mas3;
	cout << "7) mas4= ";
	mas4 = mas3;
	cout << mas4 << " ";
	cout << endl << "8) " << endl;
	char key = '1';
	mas1 -= key;
	cout << "mas1= ";
	cout << mas1;
	cout << endl;
	if (mas1 == z) {
		cout << "True";
	}
	else
		if (mas1 != z) {
			cout << "False";
		}
	int n;
	cout << "n=" << endl;
	cin >> n;
	char* b = new char[n];
	cout << endl;
	for (int i = 0; i < n; i++) {
		b[i] = rand() % 10 + 100;
		cout << b[i] << " ";
	}
	cout << endl;
	Arraya<char> mas5(b,n);
	cout << "10) ";
	int imax, imin;
	imax = mas5.max();
	imin = mas5.min();
	cout << endl;
	cout << "max= " << mas5[imax] << " min=" << mas5[imin] << endl << "imax=" << imax << " imin=" << imin << endl;
	cout << "11) " << endl;
	mas5.sortShella();
	cout << "mas5= ";
	cout << mas5;
	cout << endl << "12) " << endl;
	Arraya<char> mas6;
	mas6 = mas1 + mas5;
	cout << "mas6= ";
	cout << mas6;
	cout << endl;
	cout << "13) " << endl;
	Arraya<char> mas7;
	cout << "mas7" << endl;
	mas7.scan();
	cout << "14) " << endl;
	if (mas7.findKey('1') >= 0) {
		cout << "True";
	}
	else
		cout << "False";
	cout << endl;
	if (mas7.findKey('a') >= 0) {
		cout << "True";
	}
	else
		cout << "False";
	cout << endl;
	mas7 -= 'a';
	Arraya<char> mas8;
	cout << "mas8= ";
	mas8 = mas7;
	cout << mas8 << " ";
	cout << endl;
	cout << "15)" << endl << "mas4= ";
	mas4 += mas7;
	cout << mas4 << " ";
	cout << endl;
	cout << endl;
	cout << "16)" << "mas4= ";
	mas4 = mas6;
	cout << mas4 << " ";
	return 0;
}

