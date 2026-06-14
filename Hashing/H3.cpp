// Two sum -Pairs with 0 Sum



#include <iostream>
#include <vector>
#include <unordered_set>
#include <set>
using namespace std;

class Solution
{
public:
    vector<vector<int>> getPairs(vector<int>& arr)
    {
        unordered_set<int> seen;

        set<vector<int>> ans;

        for(int x : arr)
        {
            if(seen.count(-x))
            {
                ans.insert({
                    min(x, -x),
                    max(x, -x)
                });
            }

            seen.insert(x);
        }

        return vector<vector<int>>(ans.begin(), ans.end());
    }
};

int main()
{
    vector<int> arr = {1, -1, 2, -2, 3, 4, -4};

    Solution obj;

    vector<vector<int>> result = obj.getPairs(arr);

    cout << "Pairs with Sum 0:" << endl;

    for(auto pair : result)
    {
        cout << "[" << pair[0]
             << ", " << pair[1]
             << "]" << endl;
    }

    return 0;
}