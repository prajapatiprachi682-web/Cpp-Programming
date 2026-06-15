// 3 Sum Closest



#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution
{
public:
    int closest3Sum(vector<int> arr, int target)
    {
        sort(arr.begin(), arr.end());

        int n = arr.size();
        int ans = arr[0] + arr[1] + arr[2];

        for(int i = 0; i < n - 2; i++)
        {
            int left = i + 1;
            int right = n - 1;

            while(left < right)
            {
                int sum = arr[i] + arr[left] + arr[right];

                if(abs(target - sum) < abs(target - ans) ||
                   (abs(target - sum) == abs(target - ans) && sum > ans))
                {
                    ans = sum;
                }

                if(sum < target)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> arr = {-1, 2, 1, -4};
    int target = 1;

    Solution obj;

    cout << "Closest 3 Sum = "
         << obj.closest3Sum(arr, target)
         << endl;

    return 0;
}