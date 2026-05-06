// #include <iostream>
// using namespace std;

// int main() {
//     int n, key;

//     cout << "Enter number of elements: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter " << n << " elements:\n";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << "Enter element to search: ";
//     cin >> key;

//     int pos = -1;  // assume not found

//     for(int i = 0; i < n; i++) {
//         if(arr[i] == key) {
//             pos = i;   // store index
//             break;     // exit loop once found
//         }
//     }

//     if(pos == -1)
//         cout << "Element not found";
//     else
//         cout << "Element found at index " << pos;

//     return 0;
// }






// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int key = 30;

//     for(int i = 0; i < 5; i++)
//     {
//         if(arr[i] == key)
//         {
//             cout << "Element found at index " << i;
//             return 0;
//         }
//     }

//     cout << "Element not found";
// }




// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int key = 30;

//     for(int i = 0; i < 5; i++)
//     {
//         if(arr[i] == key)
//         {
//             cout << "Element found at index " << i;
//             return 0;
//         }
//     }

//     cout << "Element not found";
// }






#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter n: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    int found = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = i;
            break;
        }
    }

    if(found != -1)
        cout << "Element found at position: " << found + 1;
    else
        cout << "Element not found";

    return 0;
}