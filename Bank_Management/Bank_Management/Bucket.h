#pragma once
#include "Node_1.h"

class Bucket
{
public:
	int index; // bucket number
	Node_1* head; // start of collision chain

	Bucket();
	Bucket(int);
};

