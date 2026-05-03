// Primary Diagonal Sum




#include <iostream>
using namespace std;

// Function to find primary diagonal sum
int primaryDiagonalSum(int arr[][3], int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i][i];   // primary diagonal condition
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

    int result = primaryDiagonalSum(arr, 3);

    cout << "Primary Diagonal Sum = " << result << endl;

    return 0;
}