#include<iostream>
using namespace std;

class Shop
{
private:
    int itemId[100];
    int itemPrice[100];
    int counter;
public:
    Shop(); // Default Constructor
    //Shop(int id, int price, int count); // Parameterized Constructor No Need
    void setPrice(void);
    void displayPrice(void);
};

Shop :: Shop()
{
    counter = 0;
    for(int i = 0; i < 100; i++)
    {
        itemId[i] = 0;
        itemPrice[i] = 0;
    }
}

/*Shop :: Shop(int id, int price, int count)
{
    counter = count;
    for(int i = 0; i < count; i++)
    {
        itemId[i] = id;
        itemPrice[i] = price;
    }
}*/

void Shop :: setPrice(void)
{
    if(counter >= 100)
    {
        cout << "Shop is full!" << endl;
        return;
    }

    int id;
    cout << "Enter Id of your item " << counter + 1 << ": ";
    cin >> id;

    //Check duplicate Before inserting
    for(int i = 0; i < counter; i++)
    {
        if(itemId[i] == id)
        {
            cout << "Duplicate ID not allowed!\n";
            return;
        }
    }

   
    int price;

    while(true)
    {
        cout << "Enter Price of your item: ";
        cin >> price;  
        if(price < 0)
        {
            cout << "Invalid price!\n";
        }
        else
        {
            break;
        }
    }

    itemPrice[counter] = price;
    itemId[counter] = id;
    counter++;
}

void Shop :: displayPrice(void)
{
    for(int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop s1; // Object created
    s1.setPrice();
    s1.setPrice();
    s1.setPrice();
    s1.displayPrice();

    return 0;
}