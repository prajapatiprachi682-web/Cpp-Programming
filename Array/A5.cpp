//1. Linear Search in Array


// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {10, 20, 30, 40, 50};

//     int key;
//     cout << "Enter the element to search: ";
//     cin >> key;

//     for(int i = 0; i < 5; i++)
//     {
//         if(arr[i] == key)
//         {
//             cout << "Element = " << key << endl;
//             cout << "Index = " << i << endl;
//         }
//     }

//     return 0;
// }




#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int key, i;

    cout << "Enter key to search: ";
    cin >> key;

    for(i = 0; i < 5; i++)
    {
        if(arr[i] == key)
        {
            cout << key << " found at index " << i << endl;
            return 0;
        }
    }

    cout << "Not Found" << endl;

    return 0;
}