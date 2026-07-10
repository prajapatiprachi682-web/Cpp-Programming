// Array
//  GFG - Find Element Appearing Greater Than Left and Smaller Than Right



#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution
{
public:
    int findElement(vector<int> &arr)
    {
        int n = arr.size();

        vector<int> leftMax(n);

        leftMax[0] = arr[0];

        for(int i = 1; i < n; i++)
        {
            leftMax[i] = max(leftMax[i - 1], arr[i]);
        }

        int rightMin = INT_MAX;

        for(int i = n - 1; i >= 0; i--)
        {
            if(i > 0 &&
               i < n - 1 &&
               leftMax[i - 1] <= arr[i] &&
               rightMin >= arr[i])
            {
                return arr[i];
            }

            rightMin = min(rightMin, arr[i]);
        }

        return -1;
    }
};

int main()
{
    vector<int> arr = {4, 2, 5, 7};

    Solution obj;

    cout << "Element = "
         << obj.findElement(arr)
         << endl;

    return 0;
}