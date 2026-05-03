// sizeof Array vs Pointer




#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    int *p = arr;

    cout << "Size of array = " << sizeof(arr) << endl; // 20 (5*4)
    cout << "Size of pointer = " << sizeof(p) << endl; // 4 or 8

    return 0;
}