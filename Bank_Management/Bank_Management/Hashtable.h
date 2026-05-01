#pragma once
#include "Node.h"
#include "Node_1.h"
#include "Bucket.h"

class Hashtable
{
public:
	Bucket table[12];  // 12buckets

	//Node* start;
	Hashtable();
	void starthash();
	int hashFunction(int);
	void loadhashtable();
	void insert(int, int);
	void add(int, int);
	int match(int, int);
	void display();
	void displayPassword();
	void deletePassword(int);
};

