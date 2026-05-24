// Brute force approach
// Time Complexity=o(n^2)
// Space Complexity=o(1)



// #include <iostream>
// #include <vector>

// using namespace std;

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {

//         for(int i = 0; i < nums.size(); i++)
//         {
//             for(int j = i + 1; j < nums.size(); j++)
//             {
//                 if(nums[i] + nums[j] == target)
//                 {
//                     return {i, j};
//                 }
//             }
//         }

//         return {};
//     }
// };

// int main() {

//     Solution obj;

//     vector<int> nums = {2, 7, 11, 15};
//     int target = 9;

//     vector<int> ans = obj.twoSum(nums, target);

//     cout << "Indices are: ";

//     for(int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }

//     return 0;
// }




//  Two Pointer Approach
// Time Complexity=o(n^2)
// Space Complexity=o(1)



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        int left = 0;
        int right = nums.size() - 1;

        while(left < right)
        {
            int sum = nums[left] + nums[right];

            if(sum == target)
            {
                return {nums[left], nums[right]};
            }
            else if(sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return {};
    }
};

int main() {

    Solution obj;

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = obj.twoSum(nums, target);

    cout << "Pair is: ";

    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}