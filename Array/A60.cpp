// ✅ Arrays
// ✅ Kadane's Algorithm Variation
// ✅ Subarray Problems
// ✅ GFG - Maximum Sum Non-Negative Subarray






#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findSubarray(vector<int> &arr) {

        long long maxSum = -1;
        long long currSum = 0;

        int start = 0;
        int bestStart = -1;
        int bestEnd = -1;

        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] >= 0)
            {
                currSum += arr[i];

                if(currSum > maxSum)
                {
                    maxSum = currSum;
                    bestStart = start;
                    bestEnd = i;
                }
                else if(currSum == maxSum)
                {
                    int currLen = i - start + 1;
                    int bestLen = bestEnd - bestStart + 1;

                    if(currLen > bestLen)
                    {
                        bestStart = start;
                        bestEnd = i;
                    }
                }
            }
            else
            {
                currSum = 0;
                start = i + 1;
            }
        }

        if(bestStart == -1)
            return {-1};

        vector<int> ans;

        for(int i = bestStart; i <= bestEnd; i++)
            ans.push_back(arr[i]);

        return ans;
    }
};

int main()
{
    vector<int> arr = {1,2,5,-7,2,3};

    Solution obj;

    vector<int> ans = obj.findSubarray(arr);

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}