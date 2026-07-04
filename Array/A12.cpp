// LeetCode Question Number: 268 ✅ 


#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 5};

    int n = 5;   // Original numbers should be 1 to 5

    int totalSum = n * (n + 1) / 2;

    int arraySum = 0;

    for(int i = 0; i < n - 1; i++)
    {
        arraySum += arr[i];
    }

    int missingNumber = totalSum - arraySum;

    cout << "Missing Number = " << missingNumber;

    return 0;
}