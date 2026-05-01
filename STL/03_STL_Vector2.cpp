#include<iostream>
#include<vector>
using namespace std;

template<class T>
void display(vector<T> &v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        //cout << v.at(i) << " ";
    }
    cout <<endl;
}

int main()
{
    //std::vector<int> vec1;
    //int element, size;
    //cout << "Enter the size of vector: ";
    //cin >> size;
    //for(int i = 0; i < size; i++)
    //{
        //cout << "Enter an element to add to this vector: ";
    //    cin >> element;
    //    vec1.push_back(element);
    //}
    //vec1.pop_back();
    //display(vec1);
    //vector<int> :: iterator iter = vec1.begin();
    //vec1.insert(iter, 566);
    //vec1.insert(iter + 1, 34);
    //vec1.insert(iter + 1, 3, 34);
    //display(vec1);

    vector<char> vec2(4);
    vec2.push_back('5');
    display(vec2);
    vector<char> vec3(vec2);
    display(vec3);
    vector<int> vec4(6, 4);
    display(vec4);

    return 0;
}