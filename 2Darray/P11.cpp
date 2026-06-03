#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> freqInRange(vector<int>& arr,
                            vector<vector<int>>& queries)
    {
        unordered_map<int, vector<int>> mp;

        for(int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]].push_back(i);
        }

        vector<int> ans;

        for(auto &q : queries)
        {
            int l = q[0];
            int r = q[1];
            int x = q[2];

            if(mp.find(x) == mp.end())
            {
                ans.push_back(0);
                continue;
            }

            vector<int> &pos = mp[x];

            int left =
                lower_bound(pos.begin(),
                            pos.end(),
                            l)
                - pos.begin();

            int right =
                upper_bound(pos.begin(),
                            pos.end(),
                            r)
                - pos.begin();

            ans.push_back(right - left);
        }

        return ans;
    }
};

int main()
{
    vector<int> arr = {1, 2, 1, 3, 1, 2, 1};

    vector<vector<int>> queries =
    {
        {0, 6, 1},
        {1, 4, 2},
        {2, 5, 3},
        {0, 3, 4}
    };

    Solution obj;

    vector<int> result = obj.freqInRange(arr, queries);

    cout << "Answers: ";

    for(int x : result)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}