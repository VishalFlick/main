/*
Initialize:- Set first element as the largest number.
Compare:- Loop through array and update max if larger number found.
Return:- Output the maximum value after full traversal. 
*/
#include<iostream>
using namespace std;

int main()
{
    int numbers[] = {10, 5, 25, 8, 15, 3};
    int max = numbers[0];
    int n = sizeof(numbers) / sizeof(numbers[0]);

    for(int i = 1; i < n; i++)
    {
        if(numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    cout << "Largest number: " << max << endl;
    return 0;
}