// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[]={10,20,30,40,50};
//     int n=5;
//     int sum=0;

//     for(int i=0; i<n; i++)
//     {
//         sum=sum+arr[i];
//     }
//     cout<<"Sum= "<<sum;
//     return 0;
// }





// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {5, 6, 8, 2, 16};
//     int num = arr[4]; // last element
//     int sum = 0;

//     while(num != 0)
//     {
//         int digit = num % 10;
//         sum = sum + digit;
//         num = num / 10;
//     }

//     cout << sum << endl;
// }





// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {5, 6, 8, 2, 16};
//     int sum = 0;

//     for(int i = 0; i < 5; i++)
//     {
//         int num = arr[i];

//         while(num != 0)
//         {
//             int digit = num % 10;
//             sum = sum + digit;
//             num = num / 10;
//         }
//     }

//     cout << sum << endl;
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

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "Sum = " << sum;
    return 0;
}