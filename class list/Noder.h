#pragma once
#include <iostream>

using namespace std;

class List;

class Node
{
public:
	Node() = default;
	Node(int value, Node* prev, Node* next);

private:
	int value_ = 0;

	Node* prev_ = nullptr;
	Node* next_ = nullptr;
	void set_next(Node* Next);

	void set_previous(Node* Previous);
	friend class List;

	friend istream& operator>>(istream& is, List& obj);
	friend ostream& operator<<(ostream& os, const List& obj);
};