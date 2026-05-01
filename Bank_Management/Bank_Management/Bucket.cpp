#include "Bucket.h"

Bucket::Bucket()
{
	index = 0;
	head = nullptr;
}

Bucket::Bucket(int i)
{
	index = i;
	head = nullptr;
}