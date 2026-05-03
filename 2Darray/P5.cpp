// // calculate sum and maxsum of row

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[3][3]=
//     {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };
//     int MaxSum=0;

//     for(int i=0;i<3;i++)
//     {
//         int sum=0;
//         for(int j=0;j<3;j++)
//         {
//             sum+=arr[i][j];
//         }
//         if(sum>MaxSum)
//         {
//             MaxSum=sum;
//         }
//     }
//     cout<<"Maximum Row Sum="<<MaxSum;
// }





// #include <iostream>
// using namespace std;

// int maxRowSum(int arr[3][3])
// {
//     int maxSum = 0;
//     int rowIndex = 0;

//     for (int i = 0; i < 3; i++) {
//         int sum = 0;
//         for (int j = 0; j < 3; j++) {
//             sum += arr[i][j];
//         }

//         if (sum > maxSum) {
//             maxSum = sum;
//             rowIndex = i;
//         }
//     }

//     return rowIndex;   // return row number
// }

// int main()
// {
//     int arr[3][3];

//     cout << "Enter 3x3 matrix values:\n";
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     int row = maxRowSum(arr);

//     cout << "Maximum row sum is in row: " << row;

//     return 0;
// }





// #include <iostream>
// using namespace std;

// int main() {
//     int arr[4][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9},
//         {10, 11, 12}
//     };

//     int maxSum = -1;
//     int rowIndex = -1;

//     // Linear search row-wise
//     for(int i = 0; i < 4; i++) {
//         int sum = 0;

//         // Row ka sum nikalna
//         for(int j = 0; j < 3; j++) {
//             sum += arr[i][j];
//         }

//         // Find max row sum
//         if(sum > maxSum) {
//             maxSum = sum;
//             rowIndex = i;
//         }
//     }

//     cout << "Maximum Row Sum = " << maxSum << endl;
//     cout << "Row Index = " << rowIndex << endl;

//     return 0;
// }





#include <iostream>
using namespace std;

// Function: Maximum row sum aur row index find karega
int maxRowSum(int arr[][3], int rows, int cols, int &rowIndex)
{
    int maxSum = -1;

    for(int i = 0; i < rows; i++)
    {
        int sum = 0;

        // Row ka sum nikalna
        for(int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }

        // Maximum sum update
        if(sum > maxSum)
        {
            maxSum = sum;
            rowIndex = i;   // jis row ka sum max hoga, uska index save karo
        }
    }

    return maxSum;
}

int main()
{
    int arr[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    int rowIndex = -1;

    int result = maxRowSum(arr, 4, 3, rowIndex);

    cout << "Maximum Row Sum = " << result << endl;
    cout << "Row Index = " << rowIndex << endl;

    return 0;
}