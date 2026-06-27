// ✅ Heap (Priority Queue)
// ✅ Min Heap
// ✅ Arrays
// ✅ Top K Elements
// ✅ LeetCode 215 - Kth Largest Element in an Array





#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k)
    {
        priority_queue<int,
                       vector<int>,
                       greater<int>> pq;

        for(int num : nums)
        {
            pq.push(num);

            if(pq.size() > k)
            {
                pq.pop();
            }
        }

        return pq.top();
    }
};

int main()
{
    vector<int> nums = {3,2,1,5,6,4};
    int k = 2;

    Solution obj;

    cout << obj.findKthLargest(nums, k);

    return 0;
}