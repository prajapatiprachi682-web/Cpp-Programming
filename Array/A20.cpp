// Earliest Finish Time for Land and Water Rides I



#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration)
    {
        int ans = INT_MAX;

        int n = landStartTime.size();
        int m = waterStartTime.size();

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                // Land -> Water
                int landFinish = landStartTime[i] + landDuration[i];

                int waterStart = max(landFinish, waterStartTime[j]);

                int finish1 = waterStart + waterDuration[j];

                ans = min(ans, finish1);

                // Water -> Land
                int waterFinish = waterStartTime[j] + waterDuration[j];

                int landStart = max(waterFinish, landStartTime[i]);

                int finish2 = landStart + landDuration[i];

                ans = min(ans, finish2);
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> landStartTime = {2, 8};
    vector<int> landDuration = {4, 1};

    vector<int> waterStartTime = {6};
    vector<int> waterDuration = {3};

    Solution obj;

    cout << "Earliest Finish Time = "
         << obj.earliestFinishTime(
                landStartTime,
                landDuration,
                waterStartTime,
                waterDuration)
         << endl;

    return 0;
}