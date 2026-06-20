// ✅ Arrays
// ✅ Two Pointers
// ✅ Sorting
// ✅ Pair Sum
// ✅ GFG - Pairs with Sum Zero





#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> getPairs(vector<int>& arr) {

        sort(arr.begin(), arr.end());

        vector<vector<int>> ans;

        int left = 0;
        int right = arr.size() - 1;

        while(left < right)
        {
            int sum = arr[left] + arr[right];

            if(sum == 0)
            {
                ans.push_back({arr[left], arr[right]});

                int x = arr[left];
                int y = arr[right];

                while(left < right && arr[left] == x)
                    left++;

                while(left < right && arr[right] == y)
                    right--;
            }
            else if(sum < 0)
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> arr = {-1, 0, 1, 2, -1, -4};

    Solution obj;

    vector<vector<int>> ans = obj.getPairs(arr);

    for(auto &pair : ans)
    {
        cout << pair[0] << " " << pair[1] << endl;
    }

    return 0;
}