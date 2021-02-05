#include "listr.h"

List::List()
{
	head->next_ = tail;
	tail->prev_ = head;
}
List::List(int n)
{
	head->next_ = tail;
	tail->prev_ = head;
	for (int i = 0; i < n; i++)
	{
		Insert(tail, 0);
	}
}
List::List(int* array, int size)
{
	head->next_ = tail;
	tail->prev_ = head;

	for (int i = 0; i < size; i++)
	{
		Insert(tail, array[i]);
	}
}
void List::print()
{
	for (Node* temp = head->next_;temp!=tail;temp=temp->next_)
		cout << temp->value_<<" ";

}
List::List(const List& obj)
{
	head->next_ = tail;
	tail->prev_ = head;

	for (Node* it = obj.head->next_; it != obj.tail; it = it->next_)
	{
		Insert(tail, it->value_);
	}
}

List::~List()
{
	Clear();

	delete head;
	delete tail;
}



int List::Min()
{
	Node* it = head->next_;

	int min = it->value_;

	for (it = it->next_; it != tail; it = it->next_)
	{
		if (min > it->value_)
		{
			min = it->value_;
		}
	}

	return min;
}

int List::Max()
{
	Node* it = head->next_;

	int max = it->value_;

	for (it = it->next_; it != tail; it = it->next_)
	{
		if (max < it->value_)
		{
			max = it->value_;
		}
	}

	return max;
}

Node* List::FindKey(int id)
{
	int i;
	Node* res = head->next_;
	
	for (i = 0; i < id &&tail!=res; i++)
	{
		res = res->next_;
	}
	if (i == id) return res;


	else return nullptr;
}

Node* List::FindPos(int value)
{
	for (Node* it = head->next_; it != tail; it = it->next_)
	{
		if (it->value_ == value)
		{
			return it;
		}
	}

	return nullptr;
}

void List::Insert(Node* it, int value)
{
	Node* node = new Node(value, it->prev_, it);

	it->prev_->next_ = node;
	it->prev_ = node;
}

void List::Del(Node* it)
{
	it->prev_->next_ = it->next_;
	it->next_->prev_ = it->prev_;

	delete it;
}

void List::Insert(int pos_value, int value)
{
	Insert(FindPos(pos_value), value);
}

void List::Delete(int index)
{
	Del(FindPos(index));
}
void List::Deleteid(int index)
{
	Del(FindKey(index));
}
void List::AddToHead(int value)
{
	Insert(head->next_, value);
}

int List::DelHead()
{
	int value = head->next_->value_;

	Del(head->next_);

	return value;
}

void List::AddTail(int value)
{
	Insert(tail, value);
}

int List::DelTail()
{
	int value = tail->prev_->value_;

	Del(tail->prev_);

	return value;
}

void List::Clear()
{
	while (head->next_ != tail)
		DelTail();
}

int List::Count()
{
	int size = 0;

	for (Node* it = head->next_; it != tail; it = it->next_)
	{
		size++;
	}

	return size;
}

bool List::IsEmpty()
{
	return head->next_ == tail;
}

int List::operator[](int key)
{
	int i = 0;
	Node* it = head->next_;

	while (i < key && it != tail)
	{
		i++;
		it = it->next_;
	}

	if (it != tail)
		return it->value_;

	return -1;
}

List& List::operator=(const List& obj)
{
	Clear();

	for (Node* it = obj.head->next_; it != obj.tail; it = it->next_)
	{
		Insert(tail, it->value_);
	}

	return *this;
}

List List::operator+(int value)
{
	List list(*this);

	list.Insert(list.tail, value);

	return list;
}

List List::Addtail(const List& obj)
{
	List list(*this);

	for (Node* it = obj.head->next_; it != obj.tail; it = it->next_)
	{
		list.Insert(list.tail, it->value_);
	}

	return list;
}
List List::Addhead(const List& obj)
{
	List list(*this);

	for (Node* it = obj.tail->prev_; it != obj.head; it = it->prev_)
	{
		list.AddToHead(it->value_);
	}

	return list;
}

bool List::operator==(const List& obj)
{
	Node* i = head->next_;
	Node* j = obj.head->next_;
	if (i == tail && j == obj.tail)
	{
		cout << "Lists empty";
		return true;
	}
	while (i != tail && j != obj.tail)
	{
		if (i->value_ != j->value_)
		{
			return false;
		}

		i = i->next_;
		j = j->next_;
	}

	if (i != tail || j != obj.tail)
		return false;

	return true;
}
bool List::operator!=(const List& obj)
{
	Node* i = head->next_;
	Node* j = obj.head->next_;
	if (i == tail && j == obj.tail)
	{
		cout << "Lists empty";
		return false;
	}
	while (i != tail && j != obj.tail)
	{
		if (i->value_ != j->value_)
		{
			return true;
		}

		i = i->next_;
		j = j->next_;
	}

	if (i != tail || j != obj.tail)
		return true;

	return false;
}

istream& operator>>(istream& is, List& obj)
{
	int value;

	is >> value;

	obj.Insert(obj.tail, value);

	return is;
}

ostream& operator<<(ostream& os, const List& obj)
{
	Node* it = obj.head->next_;

	if (it != obj.tail)
	{
		os << it->value_;
	}

	for (it = it->next_; it != obj.tail; it = it->next_)
	{
		os << " " << it->value_;
	}

	return os;
}