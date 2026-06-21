// ✅ Arrays
// ✅ Prefix Minimum
// ✅ Suffix Maximum
// ✅ Two Pointers
// ✅ GFG - Maximum Index Difference





#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxIndexDiff(vector<int> &arr) {

        int n = arr.size();

        vector<int> leftMin(n);
        vector<int> rightMax(n);

        leftMin[0] = arr[0];

        for(int i = 1; i < n; i++)
            leftMin[i] = min(leftMin[i - 1], arr[i]);

        rightMax[n - 1] = arr[n - 1];

        for(int i = n - 2; i >= 0; i--)
            rightMax[i] = max(rightMax[i + 1], arr[i]);

        int i = 0;
        int j = 0;
        int ans = 0;

        while(i < n && j < n)
        {
            if(leftMin[i] <= rightMax[j])
            {
                ans = max(ans, j - i);
                j++;
            }
            else
            {
                i++;
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> arr = {34,8,10,3,2,80,30,33,1};

    Solution obj;

    cout << obj.maxIndexDiff(arr);

    return 0;
}