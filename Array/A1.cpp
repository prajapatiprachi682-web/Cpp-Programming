// #include <iostream>
// using namespace std;

// int main() 
// {
//     int arr[] = {12, 45, 7, 89, 23};
//     int n = 5;

//     int max = arr[0];

//     for(int i = 1; i < n; i++) 
//     {
//         if(arr[i] > max) 
//         {
//             max = arr[i];
//         }
//     }

//     cout << "Maximum element = " << max;

//     return 0;
// }







// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter " << n << " elements:\n";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int maxElement = arr[0];  // assume first element is max

//     for(int i = 1; i < n; i++) {
//         if(arr[i] > maxElement) {
//             maxElement = arr[i];
//         }
//     }

//     cout << "Maximum element = " << maxElement;
//     return 0;
// }







#include<iostream>
using namespace std;

int main()
{
    int arr[5]={654,6754,223460987,89,7554};
    int maxx=arr[0];
    
    for(int i=0;i<5;i++)
    {
        if(maxx<arr[i])
        {
            maxx=arr[i];
        }
    }
    cout<<maxx;
}