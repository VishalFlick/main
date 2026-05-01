#include "BST_Tree.h"
#include "Hashtable.h"

BST_Tree::BST_Tree()
{
	Root = nullptr;
}

void BST_Tree::add_Account(string name, string address, int accountno, int password, int balance)
{
	//check if account already exists
	if (search(Root, accountno) != nullptr)
	{
		cout << "Account already exists\n";
		return;
	}

	// Insert into HashTable (login system)
	h.add(accountno, password);

	// Save to server file
	ofstream write("server.txt", ios::app);

	write << name << endl
		<< address << endl
		<< accountno << endl
		<< password << endl
		<< balance << endl;

	write.close();

	//Create new BST node
	BST_Node* temp = new BST_Node(name, address, accountno, password, balance);

	//Insert into BST
	if (Root == nullptr)
	{
		Root = temp;
		return;
	}

	BST_Node* current = Root;

}
