// Secondary Diagonal Sum




#include <iostream>
using namespace std;

// Function to find secondary diagonal sum
int secondaryDiagonalSum(int arr[][3], int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i][n - i - 1];  // secondary diagonal formula
    }

    return sum;
}

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int result = secondaryDiagonalSum(arr, 3);

    cout << "Secondary Diagonal Sum = " << result << endl;

    return 0;
}