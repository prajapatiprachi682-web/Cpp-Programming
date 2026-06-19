// ✅ Arrays
// ✅ Greedy Algorithm
// ✅ Mathematics
// ✅ Positive / Negative Numbers
// ✅ GFG - Minimum Steps to Make Product Equal to 1





#include <iostream>
using namespace std;

class Solution {
public:
    int makeProductOne(int arr[], int N) {

        int neg = 0;
        int zero = 0;
        long long ans = 0;

        for(int i = 0; i < N; i++) {

            if(arr[i] > 0) {
                ans += arr[i] - 1;
            }
            else if(arr[i] < 0) {
                ans += (-1 - arr[i]);
                neg++;
            }
            else {
                zero++;
                ans += 1;
            }
        }

        if(neg % 2 == 1 && zero == 0)
            ans += 2;

        return ans;
    }
};

int main() {

    int arr[] = {-1, -1, -2, 4, 3};

    int n = sizeof(arr) / sizeof(arr[0]);

    Solution obj;

    cout << obj.makeProductOne(arr, n);

    return 0;
}