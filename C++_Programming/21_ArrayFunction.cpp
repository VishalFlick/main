#include<iostream>
#include<array>
#include<vector>
using namespace std;

//void printArray(int arr[], size_t size)
//void printArray(array<int, 5> arr, size_t size)
void printArray(const vector<int> &vec)
{
    //cout << "sizeof(arr) " << sizeof(arr) << endl;
    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec.at(i) << " ";
    }
}

int main()
{
    //int arr[] = {1,3,5,7};
    //array<int, 5> arr = {1,3,5,7,9};
    vector<int> myVec = {1,3,5,7,9};

    //printArray(arr, sizeof(arr)/sizeof(arr[0]));
    //printArray(arr, sizeof(arr)/sizeof(int));
    printArray(myVec);
    return 0;
}