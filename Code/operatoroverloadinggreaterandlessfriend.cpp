#include<iostream>
using namespace std;

class person
{
private:
    int weight;
public:
    person(int w = 0)
    {
        weight = w;
    }

    friend bool operator>(person x, person y);
    friend bool operator<(person x, person y);
    
};

bool operator<(person x, person y) // less than
{
    return x.weight < y.weight;
}

bool operator>(person x, person y) // greater than
{
    return x.weight > y.weight;
}


int main()
{
    int w1, w2;

    cout<<"Enter weight of Jon: ";
    cin>>w1;

    cout<<"Enter weight of  Rick: ";
    cin>>w2;

    person jon(w1);

    person rick(w2);

    if(jon > rick)
    {
        cout<<"Jon is heavy"<<endl;
    }
    else if(jon < rick)
    {
        cout<<"Rick is heavy"<<endl;
    }

    return 0;
}