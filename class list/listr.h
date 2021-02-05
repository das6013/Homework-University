#pragma once

#include "Noder.h"

class List
{
public:
	List();
	List(int n);
	List(int* array, int size);
	List(const List& obj);
	~List();

	
	void print();
	int Min();
	int Max();

	void Insert(int pos_value, int value);
	void Delete(int pos_value);

	void  AddToHead(int value);
	int DelHead();

	void AddTail(int value);
	int  DelTail();

	void Clear();

	int Count();

	bool IsEmpty();

	int operator[](int key);
	List& operator=(const List& obj);

	List operator+(int value);
	List Addtail(const List& obj);

	bool operator==(const List& obj);
	bool operator!=(const List& obj);
	List Addhead(const List& obj);

	Node* head = new Node();
	Node* tail = new Node();

	Node* FindPos(int id);
	Node* FindKey(int value);

	void Insert(Node* pos, int value);
	void Del(Node* pos);
	void Deleteid(int pos_value);
	friend istream& operator>>(istream& is, List& obj);
	friend ostream& operator<<(ostream& os, const List& obj);
};