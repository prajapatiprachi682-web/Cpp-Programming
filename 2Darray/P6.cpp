// // calculate sum and maxsum of column

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

//     for(int j=0;j<3;j++)
//     {
//         int sum=0;
//         for(int i=0;i<3;i++)
//         {
//             sum+=arr[i][j];
//         }
//         if(sum>MaxSum)
//         {
//             MaxSum=sum;
//         }
//     }
//     cout<<"Maximum Column Sum="<<MaxSum;
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
//     int colIndex = -1;

//     int rows = 4;
//     int cols = 3;

//     // Column-wise sum
//     for(int c = 0; c < cols; c++)
//     {
//         int sum = 0;

//         // Column ka sum nikalna
//         for(int r = 0; r < rows; r++)
//         {
//             sum += arr[r][c];
//         }

//         // Check max column sum
//         if(sum > maxSum)
//         {
//             maxSum = sum;
//             colIndex = c;
//         }
//     }

//     cout << "Maximum Column Sum = " << maxSum << endl;
//     cout << "Column Index = " << colIndex << endl;

//     return 0;
// }





#include <iostream>
using namespace std;

// Function to find maximum column sum
int maxColumnSum(int arr[][3], int rows, int cols, int &colIndex)
{
    int maxSum = -1;

    for(int c = 0; c < cols; c++)
    {
        int sum = 0;

        // Column ka sum nikalna
        for(int r = 0; r < rows; r++)
        {
            sum += arr[r][c];
        }

        // Linear search: max find karna
        if(sum > maxSum)
        {
            maxSum = sum;
            colIndex = c;
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

    int colIndex = -1;

    int result = maxColumnSum(arr, 4, 3, colIndex);

    cout << "Maximum Column Sum = " << result << endl;
    cout << "Column Index = " << colIndex << endl;

    return 0;
}