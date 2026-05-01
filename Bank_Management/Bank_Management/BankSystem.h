#pragma once
#include <iostream>
#include <string>
#include "BST_Tree.h"
#include "Hashtable.h"

using namespace std;

class BankSystem
{
private:
	BST_Tree T;
	Hashtable H;

public:
	void boot();
	void adminMenu();
	void staffMenu();
	void customerMenu();
};

