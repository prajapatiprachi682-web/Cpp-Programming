// ✅ Arrays
// ✅ Prefix Sum
// ✅ Running Sum
// ✅ LeetCode 1732 - Find the Highest Altitude





#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        int curr = 0;
        int maxi = 0;

        for(int x : gain)
        {
            curr += x;
            maxi = max(maxi, curr);
        }

        return maxi;
    }
};

int main()
{
    vector<int> gain = {-5, 1, 5, 0, -7};

    Solution obj;

    cout << "Highest Altitude = "
         << obj.largestAltitude(gain)
         << endl;

    return 0;
}