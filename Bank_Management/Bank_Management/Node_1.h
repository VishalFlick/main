#pragma once
class Node_1
{
private:
	int accountNumber;
	int password;
public:
	Node_1* next;

	Node_1(); // Default constructor
	Node_1(int, int); // Parameterized constructor

	int getAccountNumber();
	int getPassword();
};

