// ✅ Arrays
// ✅ Counting Sort
// ✅ Frequency Array
// ✅ LeetCode 2164 - Sort Even and Odd Indices Independently





#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {

        vector<int> evenFreq(101,0);
        vector<int> oddFreq(101,0);

        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
                evenFreq[nums[i]]++;
            else
                oddFreq[nums[i]]++;
        }

        int idx = 0;

        for(int val=1; val<=100; val++)
        {
            while(evenFreq[val]--)
            {
                nums[idx] = val;
                idx += 2;
            }
        }

        idx = 1;

        for(int val=100; val>=1; val--)
        {
            while(oddFreq[val]--)
            {
                nums[idx] = val;
                idx += 2;
            }
        }

        return nums;
    }
};

int main()
{
    vector<int> nums = {4,1,2,3};

    Solution obj;

    vector<int> ans = obj.sortEvenOdd(nums);

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}