#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubarraySum(vector<int>& arr) {
    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        currentSum += arr[i];

        if (currentSum > maxSum)
            maxSum = currentSum;

        if (currentSum < 0)
            currentSum = 0;
    }

    return maxSum;
}

int main() {
    vector<int> arr = {2, 3, -23, 4, 5, -34, 34, 244};

    cout << "Maximum Subarray Sum: " << maxSubarraySum(arr);

    return 0;
}