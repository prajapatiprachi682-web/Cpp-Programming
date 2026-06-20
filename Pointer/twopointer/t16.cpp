// ✅ Arrays
// ✅ Two Pointers
// ✅ Trapping Rain Water
// ✅ Prefix Maximum Concept
// ✅ LeetCode 42 / GFG





#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxWater(vector<int> &arr) {

        int n = arr.size();

        int left = 0;
        int right = n - 1;

        int leftMax = 0;
        int rightMax = 0;

        int water = 0;

        while(left <= right)
        {
            if(arr[left] <= arr[right])
            {
                if(arr[left] >= leftMax)
                {
                    leftMax = arr[left];
                }
                else
                {
                    water += leftMax - arr[left];
                }

                left++;
            }
            else
            {
                if(arr[right] >= rightMax)
                {
                    rightMax = arr[right];
                }
                else
                {
                    water += rightMax - arr[right];
                }

                right--;
            }
        }

        return water;
    }
};

int main()
{
    vector<int> arr = {3,0,1,0,4};

    Solution obj;

    cout << obj.maxWater(arr);

    return 0;
}