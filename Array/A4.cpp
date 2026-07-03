// 1. Minimum Element (Fixed Array)


// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {12, 45, 7, 89, 23};
//     int n = 5;

//     int minElement = arr[0];

//     for(int i = 1; i < n; i++)
//     {
//         if(arr[i] < minElement)
//         {
//             minElement = arr[i];
//         }
//     }

//     cout << "Minimum element = " << minElement;

//     return 0;
// }




// 2. Minimum Element + Array Size + Memory Address


// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {6, 1, 8, 10, 3};

//     int size = sizeof(arr) / sizeof(arr[0]);
//     int minElement = arr[0];

//     for(int i = 0; i < size; i++)
//     {
//         if(minElement > arr[i])
//         {
//             minElement = arr[i];
//         }
//     }

//     cout << "Minimum element: " << minElement << endl;
//     cout << "Size of array: " << size << endl;

//     cout << &arr[0] << endl;
//     cout << &arr[1] << endl;
//     cout << &arr[2] << endl;
//     cout << &arr[3] << endl;
//     cout << &arr[4] << endl;

//     return 0;
// }




// 3. Minimum Element (User Input)


#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int minElement = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < minElement)
        {
            minElement = arr[i];
        }
    }

    cout << "Minimum element = " << minElement;

    return 0;
}