// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = 5;

//     int start = 0;
//     int end = n - 1;

//     while(start < end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }

//     cout << "Reversed array: ";

//     for(int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }






#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) cin >> arr[i];

    // Reverse
    for(int i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    cout << "Reversed array:\n";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}