#include<iostream>
using namespace std;

int main()
{
    int arr[3] = {10, 20, 30};

    cout << "Address of arr        : " << arr << endl;
    cout << "Value at *arr         : " << *arr << endl;
    cout << "Address of arr[0]     : " << &arr[0] << endl;

    cout << "arr[0]                : " << arr[0] << endl;
    cout << "*(arr)                : " << *(arr) << endl;
    cout << "0[arr]                : " << 0[arr] << endl;
    cout << "*(0 + arr)            : " << *(0 + arr) << endl;

    cout << "arr == &arr[0]        : " << (arr == &arr[0]) << endl;

    cout << "arr[0] == *(arr+0)    : " << (arr[0] == *(arr + 0)) << endl;
    cout << "arr[1] == *(arr+1)    : " << (arr[1] == *(arr + 1)) << endl;
    cout << "arr[2] == *(arr+2)    : " << (arr[2] == *(arr + 2)) << endl;

    return 0;
}