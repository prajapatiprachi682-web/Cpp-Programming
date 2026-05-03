// Traversal using Pointer Variable




#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {10,20,30,40,50};
    int n = 5;

    int *p = arr;

    while(p < arr + n)
    {
        cout << *p << " ";
        p++;
    }

    return 0;
}