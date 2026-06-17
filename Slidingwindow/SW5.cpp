// Smallest Subarray with Sum Greater Than X (GFG)



#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution
{
public:
    int smallestSubWithSum(int x, vector<int>& arr)
    {
        int n = arr.size();
        int ans = INT_MAX;

        for(int i = 0; i < n; i++)
        {
            int sum = 0;

            for(int j = i; j < n; j++)
            {
                sum += arr[j];

                if(sum > x)
                {
                    ans = min(ans, j - i + 1);
                    break;
                }
            }
        }

        return (ans == INT_MAX) ? 0 : ans;
    }
};

int main()
{
    vector<int> arr = {1, 4, 45, 6, 0, 19};
    int x = 51;

    Solution obj;

    cout << "Smallest Subarray Length = "
         << obj.smallestSubWithSum(x, arr)
         << endl;

    return 0;
}