// Topic
// Array
// Partition Array According to Pivot
// ✅ #2161 — Partition Array According to Given Pivot





#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> pivotArray(vector<int>& nums, int pivot)
    {
        vector<int> less;
        vector<int> same;
        vector<int> greater;

        for(int num : nums)
        {
            if(num < pivot)
            {
                less.push_back(num);
            }
            else if(num == pivot)
            {
                same.push_back(num);
            }
            else
            {
                greater.push_back(num);
            }
        }

        vector<int> ans;

        for(int x : less)
            ans.push_back(x);

        for(int x : same)
            ans.push_back(x);

        for(int x : greater)
            ans.push_back(x);

        return ans;
    }
};

int main()
{
    vector<int> nums = {9, 12, 5, 10, 14, 3, 10};
    int pivot = 10;

    Solution obj;

    vector<int> ans = obj.pivotArray(nums, pivot);

    cout << "Pivoted Array: ";

    for(int x : ans)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}