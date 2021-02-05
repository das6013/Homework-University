#include "Noder.h"
void Node::set_next(Node* next)
{
	this->next_ = next;
}
void Node::set_previous(Node* next)
{
	this->prev_ = next;
}
Node::Node(int value, Node* prev, Node* next)
	: value_(value)
	, prev_(prev)
	, next_(next)
{

}