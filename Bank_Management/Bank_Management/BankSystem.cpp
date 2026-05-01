#include "BankSystem.h"


void BankSystem::adminMenu()
{
		int condition = 0;

		while (condition != 6)
		{
			cout << "\nWelcome ADMIN\n";
			cout << "Choose The Following Please\n";
			cout << "Press 1 To Add Account\n";
			cout << "Press 2 To Delete Account\n";
			cout << "Press 3 To Check All Account\n";
			cout << "Press 4 To See Password Of Account\n";
			cout << "Press 5 To Edit Account\n";
			cout << "Press 6 To Exit\n";

			cin >> condition;

			switch (condition)
			{
			case 1:
				string name = "", address = "";
				int account_number, password, balance;

				cin.ignore(); // clear input buffer

				cout << "Enter Name\n";
				getline(cin, name);

				cout << "Enter Address\n";
				getline(cin, address);

				cout << "Enter Account Number\n";
				cin >> account_number;

				cout << "Enter Password\n";
				cin >> password;

				cout << "Enter Balance \n";
				cin >> balance;

				// Call BST function
				T.add_Account(name, address, account_number, password, balance);

				cout << "Account Added Successfully\n";

				break;
			}
		}
}
