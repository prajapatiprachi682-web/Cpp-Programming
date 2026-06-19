// Primary and Secondary Diagonal Sum (Using arr[n/2][n/2])




// #include <iostream>
// using namespace std;

// int diagonalSum(int arr[][3], int n)
// {
//     int sum = 0;

//     for(int i = 0; i < n; i++)
//     {
//         sum += arr[i][i];          // primary diagonal
//         sum += arr[i][n - i - 1];  // secondary diagonal
//     }

//     // Center element remove because counted twice
//     sum -= arr[n/2][n/2];

//     return sum;
// }

// int main()
// {
//     int arr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     int n = 3;

//     int result = diagonalSum(arr, n);

//     cout << "Sum of both diagonals = " << result << endl;

//     return 0;
// }









#include<iostream>
using namespace std;
int  diagonal_sum(){
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int primarySum = 0;
    int secondarySum = 0;

    for(int i = 0; i < 3; i++) {
        primarySum += arr[i][i];
        secondarySum += arr[i][2 - i];
    }

    cout << "Primary Diagonal Sum = " << primarySum << endl;
    cout << "Secondary Diagonal Sum = " << secondarySum << endl;
    cout << "Total Diagonal Sum = " << primarySum + secondarySum << endl;
}
int main(){
    diagonal_sum();
    return 0;
}