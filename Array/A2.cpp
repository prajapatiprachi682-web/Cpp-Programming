#include <iostream>
using namespace std;

int main() 
{
    int arr[] = {12, 45, 7, 89, 23};
    int n = 5;

    int min = arr[0];

    for(int i = 1; i < n; i++) 
    {
        if(arr[i] < min) 
        {
            min = arr[i];
        }
    }

    cout << "Minimum element = " << min;

    return 0;
}






// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {6, 1, 8, 10, 3};

//     int size = sizeof(arr) / sizeof(arr[0]);
//     int min = arr[0];

//     for(int i = 0; i < size; i++)
//     {
//         if(min > arr[i])
//         {
//             min = arr[i];
//         }
//     }

//     cout << "Minimum element: " << min << endl;
//     cout << "Size of array: " << size << endl;

//     // Printing addresses
//     cout << &arr[0] << endl;
//     cout << &arr[1] << endl;
//     cout << &arr[2] << endl;
//     cout << &arr[3] << endl;
//     cout << &arr[4] << endl;

//     return 0;
// }






// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter elements:\n";
//     for(int i = 0; i < n; i++) cin >> arr[i];

//     int min = arr[0];
//     for(int i = 1; i < n; i++) {
//         if(arr[i] < min) min = arr[i];
//     }

//     cout << "Minimum element = " << min;
//     return 0;
// }