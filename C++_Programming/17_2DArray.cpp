#include<iostream>
using namespace std;

// 1st Way

const int r = 2;
const int c = 2;

void fun(int arr[r][c])
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
}

// 2nd Way

void fun2(int* arr, int r, int c)
{
        for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout << *(arr+i*c+j) <<" ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[2][2] = {
        {1, 2}, {3, 4}
    };

    fun(arr);
    fun2((int*)arr,2,2);

    return 0;
}