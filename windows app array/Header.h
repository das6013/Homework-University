#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
using namespace std;
class Arraya{
	
	
public:	
	void ShiftLeft(int pos);//сдвиг влево, начиная с позиции pos+1
	int mem,n,*a;//конструктор по умолчанию
Arraya(int _mem=1); 	                  	
Arraya(int *_a,int _n);	//конструктор с аргументом, 
		//m – число элементов в массиве a
 
Arraya (const Arraya &x);					//конструктор копирования
Arraya & operator = (const Arraya &x);    	//операция присвоения
~Arraya();								//деструктор
 
void Scan();				//ввод массива из m чисел
void Print();					//вывод массива
int & operator [] (int i);			//считывание элемента по позиции
int FindKey (int key);			//поиск элемента key в массиве 
		//(возвращает индекс key или -1)

Arraya & operator += (int key); 	
							//добавляет key в конец массива a
Arraya operator + (int key); 		
							//формирует массив b = a + key 
							//(key добавляется в конец)
Arraya & operator += (Arraya);                      	
							//добавление массива в конец массива a
Arraya operator + (Arraya);                            	
							//формирует массив y=a+x
Arraya & operator -= (int key);                     	
							//удаление элемента key
Arraya operator - (int key);                       	
							//формирует новый массив b = a - key

Arraya & DelPosEq (int pos);                     	
							//удаление элемента с позиции pos
Arraya DelPosNew (int pos);                     	
							//формирует новый массив b, в котором 
							//удален элемент с позиции pos

bool operator == (Arraya X); 		//проверка равенства массивов
bool operator != (Arraya);			//проверка неравенства массивов
 
int Max ();			//нахождение максимума в массиве, возвращает 
					//индекс максимального элемента
int Min ();   			// нахождение минимума в массиве
void Sorting ();		//сортировка массива
 
friend ostream & operator << (ostream &r, Arraya &x);
friend istream & operator >> (istream &r, Arraya &x);
 

};