// Total occurances




// Binary seach

// #include <bits/stdc++.h>
// using namespace std;

// int firstOccurrence(vector<int>& arr, int x)
// {
//     int low = 0, high = arr.size() - 1;
//     int first = -1;

//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] == x)
//         {
//             first = mid;
//             high = mid - 1;   // left side
//         }
//         else if (arr[mid] < x)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return first;
// }

// int lastOccurrence(vector<int>& arr, int x)
// {
//     int low = 0, high = arr.size() - 1;
//     int last = -1;

//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] == x)
//         {
//             last = mid;
//             low = mid + 1;   // right side
//         }
//         else if (arr[mid] < x)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return last;
// }

// int main()
// {
//     vector<int> arr = {4, 4, 4, 4, 6, 7, 8}; // sorted array
//     int x = 4;

//     int first = firstOccurrence(arr, x);
//     int last = lastOccurrence(arr, x);

//     if (first == -1)
//         cout << "Total occurrences: 0";
//     else
//         cout << "Total occurrences: " << (last - first + 1);

//     return 0;
// }





// Linear seach


#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {4, 6, 4, 7, 4, 8, 4};
    int x = 4;

    int count = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }

    cout << "Total occurrences: " << count;

    return 0;
}