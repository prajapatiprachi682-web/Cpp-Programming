// ✅ Recursion
// ✅ Backtracking
// ✅ DFS (Depth First Search)
// ✅ Number Generation
// ✅ GFG - Increasing Numbers With N Digits





#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    void generate(int n,
                  int lastDigit,
                  int num,
                  vector<int>& ans)
    {
        if(n == 0)
        {
            ans.push_back(num);
            return;
        }

        for(int d = lastDigit + 1; d <= 9; d++)
        {
            generate(n - 1,
                     d,
                     num * 10 + d,
                     ans);
        }
    }

    vector<int> increasingNumbers(int n)
    {
        vector<int> ans;

        if(n == 1)
        {
            for(int i = 0; i <= 9; i++)
                ans.push_back(i);

            return ans;
        }

        if(n > 9)
            return ans;

        for(int first = 1; first <= 9; first++)
        {
            generate(n - 1,
                     first,
                     first,
                     ans);
        }

        return ans;
    }
};

int main()
{
    int n = 2;

    Solution obj;

    vector<int> ans = obj.increasingNumbers(n);

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}