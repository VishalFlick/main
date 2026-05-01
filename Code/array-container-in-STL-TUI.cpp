#include<iostream>
#include<array>
using namespace std;


int main()
{
    int sizeofSTLarray = 0;

    std::array<int, 8>arrobj1;

    sizeofSTLarray = arrobj1.size(); // find size of STL array

    for(int i = 0; i < sizeofSTLarray; i++) // loop taking input
    {
        cout<<"Enter a number at "<< i <<" is: ";
        cin>>arrobj1[i];                    // take input
    }

    //print
    for(int j = 0; j < sizeofSTLarray; j++)
    {
        cout<<arrobj1[j]<<" ";
    }


    return 0;
}