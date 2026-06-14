// Pairs with Positive Negative values



#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> posNegPair(vector<int> &arr)
    {
        unordered_map<int,int> freq;

        for(int x : arr)
        {
            freq[x]++;
        }

        vector<int> ans;

        for(int x : arr)
        {
            if(x == 0)
                continue;

            if(freq[x] > 0 && freq[-x] > 0)
            {
                ans.push_back(x);
                ans.push_back(-x);

                freq[x]--;
                freq[-x]--;
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> arr = {1, -1, 2, -2, 3, 4, -4};

    Solution obj;

    vector<int> ans = obj.posNegPair(arr);

    cout << "Positive-Negative Pairs: ";

    for(int x : ans)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}