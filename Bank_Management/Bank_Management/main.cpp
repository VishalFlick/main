
#include <iostream>
#include "BankSystem.h"
#include"admin.h"
#include"staff.h"
#include"customer.h"
using namespace std;

int main()
{
    BankSystem bank;
    
    bank.boot();

    int condition = 0;

    while (condition != 4)
    {
        cout << "\n===== BANK MANAGEMENT SYSTEM =====\n";
        cout << "Login As:\n";
        cout << "1. ADMIN\n";
        cout << "2. STAFF\n";
        cout << "3. CUSTOMER\n";
        cout << "4. EXIT\n";
        cout << "Enter choice: ";

        cin >> condition;

        switch (condition)
        {
        case 1:
            bank.adminMenu();
            break;

        case 2:
            staff();
            break;

        case 3:
            customer();
            break;

        case 4:
            cout << "Exiting system...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }
    }
    return 0;
}

