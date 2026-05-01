#include "Node.h"

Node::Node()
{
	next = nullptr;
	pre = nullptr;
	data = 0;
}
// Parameterized Constructor
Node::Node(int d)
{
	next = nullptr;
	pre = nullptr;
	data = d;
}