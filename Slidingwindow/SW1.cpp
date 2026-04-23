#include <bits/stdc++.h>
using namespace std;

int maxSumSubarray(int arr[], int n, int k) {
    int left = 0, right = 0;
    int sum = 0;
    int maxi = INT_MIN;

    while (right < n) {
        sum += arr[right];

        if (right - left + 1 == k) {
            maxi = max(maxi, sum);
            sum -= arr[left];
            left++;
        }

        right++;
    }
    return maxi;
}

int main() {
    int arr[] = {2, 1, 5, 1, 3, 2};
    int n = 6;
    int k = 3;

    cout << maxSumSubarray(arr, n, k);
    return 0;
}
