// Array Index vs Pointer Arithmetic




#include<iostream>
using namespace std;

int main()
{
    int arr[3] = {10, 20, 30};

    cout << arr[0] << endl;        // 10
    cout << *(arr + 0) << endl;    // 10

    cout << arr[1] << endl;        // 20
    cout << *(arr + 1) << endl;    // 20

    return 0;
}