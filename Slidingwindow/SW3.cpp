#include <iostream>
#include <vector>
using namespace std;

int longestSubarray(vector<int>& nums, int k) {
    int left = 0;
    int sum = 0;
    int maxLen = 0;

    for (int right = 0; right < nums.size(); right++) {
        sum += nums[right];

        // Agar sum k se bada ho gaya, window shrink karo
        while (sum > k) {
            sum -= nums[left];
            left++;
        }

        // Valid window hai (sum <= k)
        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}

int main() {
    vector<int> nums = {2, 1, 3, 1, 1};
    int k = 5;

    cout << "Longest Subarray Length: " << longestSubarray(nums, k);

    return 0;
}