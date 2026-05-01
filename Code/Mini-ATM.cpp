#include<conio.h>
#include<iostream>
#include<string>
using namespace std;

/* Mini Project - ATM
   -> Check Balance
   -> Cash withdraw
   -> User Details
   -> Update Mobile No.
*/


class ATM                      // class ATM
{
private:                      // private member variables
	long int account_No;
	string name;
	int PIN;
	double balance;
	string mobile_No;
public:                        //public member functions
	//setData function is setting the data into private member variables.
	void setData(long int p_account_No, string p_name, int p_PIN, double p_balance, string p_mobile_No)
	{
		account_No = p_account_No;  // assigning the formal arguments to private member variables
		name = p_name;
		PIN = p_PIN;
		balance = p_balance;
		mobile_No = p_mobile_No;
	}

	//getAccountNo function is returning the user's account no.
	long int getAccountNo()
	{
		return account_No;
	}

	//getName function is returning the user's Name
	string getName()
	{
		return name;
	}

	// getPIN function is returning the user's PIN 
	int getPIN()
	{
		return PIN;
	}

	// getBalance function is returning the user's Balance
	double getBalance()
	{
		return balance;
	}

	// getMobileNo function is returning the user's Mobile No. 
	string getMobileNo()
	{
		return mobile_No;
	}

	//setMobile function is Updating the user mobile mobile no
	void setMobile(string perv_mobile, string new_mobile)
	{
		if(perv_mobile == mobile_No)    // it will check old Mobile no
		{
			mobile_No = new_mobile;      // and Update with new if old matches
			cout<<"Successfully Update Mobile no. "<<endl;;
			_getch();                    // getch is to hold the screen (until user press any key)
		}
		else                              // if old mobile no. does not match with user details then it show error message
		{
			cout<<"Incorrect !!! Old Mobile no."<<endl;
            _getch();                    // getch is to hold the screen (until user press any key)
		}
	}

	//cashWithDraw function is used to withdraw money form ATM
	void cashWithDraw(int amount_c)
	{
		if(amount_c > 0 && amount_c < balance) // Check entered amount validity
		{
			balance -= amount_c; //balance = balance - amount_c
			cout<<"Please Collect Your Cash.";
			cout<<endl<<"Available Balance: "<<balance;
			_getch();     // getch is to hold the screen (until user press any key)
		}
		else
		{
			cout<<"Invalid Input or Insufficient Balance.";
			_getch();    // getch is to hold the screen (until user press any key)
		}
	}
};


int main()
{
	int choice = 0, enterPIN;          //enterPIN and enterAccountNo. --> user authentication
	long int enterAccountNo;

	system("cls");

	// Created User (object)

	ATM user1;

	// Set User Details (into object)  (Setting Default Data)

	user1.setData(1234567, "Rohan", 1111, 46000.90, "987654321");

	do{
		system("cls");

		cout<<"|||---WELCOME TO ATM---|||"<<endl;
		cout<<"Enter Your Account No: ";    // Asking user to enter account no
		cin>>enterAccountNo;

		cout<<"Enter PIN: ";               //Asking user to enter PIN
		cin>>enterPIN;

		//Check whether enter values matches with user details
		if((enterAccountNo == user1.getAccountNo()) && (enterPIN == user1.getPIN()))
		{
			do{
				int amount = 0;
				string oldMobileNo, newMobileNo;

				system("cls");
				//User Interface

				cout<<"||||||| WELCOME TO ATM ||||||"<<endl;
				cout<< endl <<"Select Options ";
				cout<< endl <<"1. Check Balance";
				cout<< endl <<"2. Cash withdraw";
				cout<< endl <<"3. Show User Details";
				cout<< endl <<"4. Update Mobile No.";
				cout<< endl <<"5. Exit"<<endl;
				cin>>choice;  // taking user choice

				switch(choice)           
				{
				case 1:    // if user presses 1 
					cout<<endl<<"Your bank balance is: "<< user1.getBalance();
					                               // getBalance is ... printing the users
					_getch();
					break;

				case 2:    // if user presses 2
					cout<<endl<<"Enter the amount: ";
					cin>>amount;
					user1.cashWithDraw(amount);       // calling setCashWithDraw function
					                                     // passing the withdraw amount
					break;

				case 3:     // if user presses 3
					cout<<endl<<"||||| User Details Are |||||";
					cout<<endl<<"-> Account_No"<<user1.getAccountNo();
					cout<<endl<<"-> Name      "<<user1.getName();
					cout<<endl<<"-> Balance   "<<user1.getBalance();
					cout<<endl<<"-> Mobile No."<<user1.getMobileNo();
					                            // getting and printing user details
					_getch();
					break;

				case 4:       // if user presses 4
					cout<<endl<<"Enter Old Mobile No. ";
					cin>> oldMobileNo;               // take old mobile no

					cout<<endl<<"Enter New Mobile No. ";
					cin>> newMobileNo;                 // take new mobile no

					user1.setMobile(oldMobileNo, newMobileNo); // now set new mobile no
					break;

				case 5:           // if user presses 5
					exit(0);       // exit application

				default:
					cout<<endl<<"Enter Valid Data !!!";
				}

			}while(1);        // MENU   // condition will always TRUE and loop is
		} 
		else
		{
			cout<<"User Details are Invalid !!! ";
			_getch();
		}

	}while(1);                      // LOGIN // Condition will always TRUE and Loop is

	return 0;
}