// ✅ Arrays
// ✅ Queries
// ✅ Preprocessing
// ✅ Index Mapping
// ✅ LeetCode 3159 - Find Occurrences of an Element in an Array





#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums,
                                     vector<int>& queries,
                                     int x) {

        vector<int> occ;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == x)
            {
                occ.push_back(i);
            }
        }

        vector<int> ans;

        for(int q : queries)
        {
            ans.push_back(q <= occ.size() ? occ[q - 1] : -1);
        }

        return ans;
    }
};

int main()
{
    vector<int> nums = {1,3,1,7,1};
    vector<int> queries = {1,3,4};
    int x = 1;

    Solution obj;

    vector<int> ans =
        obj.occurrencesOfElement(nums, queries, x);

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}