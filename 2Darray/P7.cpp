// Linear search in 2D Array



#include <iostream>
using namespace std;

bool search2D(int arr[3][3], int key)
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == key)
                return true;
        }
    }
    return false;
}

int main()
{
    int arr[3][3];

    cout << "Enter 3x3 array values:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    if (search2D(arr, key))
        cout << "Element found!";
    else
        cout << "Element not found.";

    return 0;
}