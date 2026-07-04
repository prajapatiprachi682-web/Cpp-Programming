// Intersection of two arrays

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr1[] = {1, 2, 3, 4, 5};
//     int arr2[] = {3, 4, 5, 6, 7};

//     int n1 = sizeof(arr1) / sizeof(arr1[0]);
//     int n2 = sizeof(arr2) / sizeof(arr2[0]);

//     int inter[10]; // Third array for intersection
//     int k = 0;     // Index for intersection

//     for(int i = 0; i < n1; i++)
//     {
//         for(int j = 0; j < n2; j++)
//         {
//             if(arr1[i] == arr2[j])
//             {
//                 inter[k++] = arr1[i];
//             }
//         }
//     }

//     cout << "Intersection Array: ";
//     for(int i = 0; i < k; i++)
//     {
//         cout << inter[i] << " ";
//     }

//     return 0;
// }




#include<iostream>
using namespace std;

int main()
{
    int a[5] = {3, 4, 2, 8, 5};
    int b[5] = {4, 9, 8, 5, 3};

    int c[5];
    int k = 0;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(a[i] == b[j])
            {
                c[k] = a[i];
                k++;
                break;
            }
        }
    }

    cout << "Common values: ";

    for(int i = 0; i < k; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}