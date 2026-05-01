#include <iostream>
#include <vector>
#include "Hashtable.h"

using namespace std;

Hashtable::Hashtable()
{
	starthash();
}

void Hashtable::starthash()
{
	for (int i = 0; i < 12; i++)
	{
		table[i] = Bucket(i);
	}

	loadhashtable();
}

int Hashtable::hashFunction(int accountNumber)
{
	return accountNumber % 12;
}
