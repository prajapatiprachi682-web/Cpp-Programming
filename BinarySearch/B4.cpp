// First Bad Version



#include <iostream>
using namespace std;

// Assume this is the first bad version
int firstBad = 4;

// API provided by LeetCode
bool isBadVersion(int version)
{
    return version >= firstBad;
}

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int low = 1;
        int high = n;
        int ans = n;

        while(low <= high)
        {
            long long mid = low + (high - low) / 2;

            if(isBadVersion(mid))
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return ans;
    }
};

int main()
{
    int n = 5;

    Solution obj;

    cout << "First Bad Version = "
         << obj.firstBadVersion(n)
         << endl;

    return 0;
}