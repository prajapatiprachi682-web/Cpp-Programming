// Copy One Array into Another


#include<iostream>
using namespace std;

int main()
{
    int arr1[] = {10,20,30,40,50,60};
    int arr2[] = {20,5,10,50,6,40};

    int arr3[6];

    int n = 6;

    for(int i = 0; i < n; i++)
    {
        arr3[i] = arr1[i];
    }

    cout << "Array is: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}