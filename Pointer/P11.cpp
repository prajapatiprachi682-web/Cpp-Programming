// Binary Search Relation with Pointer




#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};

    int s = 0, e = 4;
    int mid = s + (e - s) / 2;

    cout << "arr[mid] = " << arr[mid] << endl;
    cout << "Using pointer = " << *(arr + mid) << endl;

    return 0;
}