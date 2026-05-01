#include<iostream>

int main()
{
    int arr[] = {1, 3, 5, 7, 22};
    for(auto& i : arr){
        std::cout<<i<<"\n";
    }
    return 0;
}