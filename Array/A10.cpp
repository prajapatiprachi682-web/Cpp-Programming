// Sort 0s and 1s (Correct Code ✅)


// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {0,1,0,1,0,1,0,1};

//     int n = sizeof(arr) / sizeof(arr[0]);

//     int left = 0;
//     int right = n - 1;

//     while(left <= right)
//     {
//         while(arr[left] == 0 && left < right)
//         {
//             left++;
//         }

//         while(arr[right] == 1 && left < right)
//         {
//             right--;
//         }

//         if(left <= right)
//         {
//             swap(arr[left], arr[right]);
//             left++;
//             right--;
//         }
//     }

//     cout << "Sorted Array: ";

//     for(int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }




#include<iostream>
using namespace std;

void sort012(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    int arr[] = {0,1,2,0,1,2,0,1,2};

    int n = sizeof(arr) / sizeof(arr[0]);

    sort012(arr, n);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}