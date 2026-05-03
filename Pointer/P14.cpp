// Address Printing




#include<iostream>
using namespace std;

int main()
{
    int arr[3] = {10, 20, 30};

    cout << arr << endl;       // address of arr[0]
    cout << &arr[0] << endl;   // same address

    return 0;
}