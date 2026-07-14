// ✅ Arrays
// ✅ Two Pointers
// ✅ Greedy
// ✅ Merge Traversal
// ✅ GFG - Maximum Sum Path in Two Arrays




#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int maxPathSum(vector<int> &a, vector<int> &b)
    {
        int i = 0;
        int j = 0;

        long long sum1 = 0;
        long long sum2 = 0;
        long long ans = 0;

        while(i < a.size() && j < b.size())
        {
            if(a[i] < b[j])
            {
                sum1 += a[i];
                i++;
            }
            else if(a[i] > b[j])
            {
                sum2 += b[j];
                j++;
            }
            else
            {
                ans += max(sum1, sum2) + a[i];

                sum1 = 0;
                sum2 = 0;

                i++;
                j++;
            }
        }

        while(i < a.size())
            sum1 += a[i++];

        while(j < b.size())
            sum2 += b[j++];

        ans += max(sum1, sum2);

        return ans;
    }
};

int main()
{
    vector<int> a = {2,3,7,10,12};
    vector<int> b = {1,5,7,8};

    Solution obj;

    cout << obj.maxPathSum(a, b);

    return 0;
}