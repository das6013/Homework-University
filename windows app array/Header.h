#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
using namespace std;
class Arraya{
	
	
public:	
	void ShiftLeft(int pos);//����� �����, ������� � ������� pos+1
	int mem,n,*a;//����������� �� ���������
Arraya(int _mem=1); 	                  	
Arraya(int *_a,int _n);	//����������� � ����������, 
		//m � ����� ��������� � ������� a
 
Arraya (const Arraya &x);					//����������� �����������
Arraya & operator = (const Arraya &x);    	//�������� ����������
~Arraya();								//����������
 
void Scan();				//���� ������� �� m �����
void Print();					//����� �������
int & operator [] (int i);			//���������� �������� �� �������
int FindKey (int key);			//����� �������� key � ������� 
		//(���������� ������ key ��� -1)

Arraya & operator += (int key); 	
							//��������� key � ����� ������� a
Arraya operator + (int key); 		
							//��������� ������ b = a + key 
							//(key ����������� � �����)
Arraya & operator += (Arraya);                      	
							//���������� ������� � ����� ������� a
Arraya operator + (Arraya);                            	
							//��������� ������ y=a+x
Arraya & operator -= (int key);                     	
							//�������� �������� key
Arraya operator - (int key);                       	
							//��������� ����� ������ b = a - key

Arraya & DelPosEq (int pos);                     	
							//�������� �������� � ������� pos
Arraya DelPosNew (int pos);                     	
							//��������� ����� ������ b, � ������� 
							//������ ������� � ������� pos

bool operator == (Arraya X); 		//�������� ��������� ��������
bool operator != (Arraya);			//�������� ����������� ��������
 
int Max ();			//���������� ��������� � �������, ���������� 
					//������ ������������� ��������
int Min ();   			// ���������� �������� � �������
void Sorting ();		//���������� �������
 
friend ostream & operator << (ostream &r, Arraya &x);
friend istream & operator >> (istream &r, Arraya &x);
 

};