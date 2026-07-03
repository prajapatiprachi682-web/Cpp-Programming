// Reverse Array


// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {10, 20, 30, 40, 50};

//     int start = 0;
//     int end = 4;

//     while(start < end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }

//     cout << "Reverse Array: ";

//     for(int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }




// Reverse array by index calculation


// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter elements:\n";

//     for(int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     // Reverse Array
//     for(int i = 0; i < n/2; i++)
//     {
//         int temp = arr[i];
//         arr[i] = arr[n-i-1];
//         arr[n-i-1] = temp;
//     }

//     cout << "Reversed array:\n";

//     for(int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }




// Sum of last element digit


// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {5, 6, 8, 2, 16};

//     int num = arr[4];   // Last element
//     int sum = 0;

//     while(num != 0)
//     {
//         int digit = num % 10;
//         sum = sum + digit;
//         num = num / 10;
//     }

//     cout << sum << endl;

//     return 0;
// }




// Sum of every element digit


#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {5, 6, 8, 2, 16};

    for(int i = 0; i < 5; i++)
    {
        int num = arr[i];
        int sum = 0;

        while(num != 0)
        {
            sum += num % 10;
            num /= 10;
        }

        cout << "Sum of digits of " << arr[i] << " = " << sum << endl;
    }

    return 0;
}




// Product of all element digit


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

    int product = 1;

    for(int i = 0; i < n; i++)
    {
        product *= arr[i];
    }

    cout << "Product = " << product;

    return 0;
}