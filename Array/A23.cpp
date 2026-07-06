// 📌 Topic
// Array
// Binary Search
// Prefix Minimum
// Earliest Finish Time for Land and Water Rides II
// 📌 LeetCode
// ✅ #3653 — Earliest Finish Time for Land and Water Rides II





#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution
{
public:

    long long solve(vector<int>& Astart,
                    vector<int>& Adur,
                    vector<int>& Bstart,
                    vector<int>& Bdur)
    {
        int m = Bstart.size();

        vector<pair<long long,long long>> rides;

        for(int i = 0; i < m; i++)
        {
            rides.push_back({Bstart[i], Bdur[i]});
        }

        sort(rides.begin(), rides.end());

        vector<long long> pref(m);
        vector<long long> suff(m);

        pref[0] = rides[0].second;

        for(int i = 1; i < m; i++)
        {
            pref[i] = min(pref[i - 1], rides[i].second);
        }

        suff[m - 1] =
            rides[m - 1].first + rides[m - 1].second;

        for(int i = m - 2; i >= 0; i--)
        {
            suff[i] = min(suff[i + 1],
                          rides[i].first +
                          rides[i].second);
        }

        vector<long long> starts;

        for(auto &x : rides)
        {
            starts.push_back(x.first);
        }

        long long ans = LLONG_MAX;

        for(int i = 0; i < Astart.size(); i++)
        {
            long long finishA =
                (long long)Astart[i] + Adur[i];

            int idx =
                upper_bound(starts.begin(),
                            starts.end(),
                            finishA)
                - starts.begin();

            if(idx > 0)
            {
                ans = min(ans,
                          finishA + pref[idx - 1]);
            }

            if(idx < m)
            {
                ans = min(ans,
                          suff[idx]);
            }
        }

        return ans;
    }

    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration)
    {
        long long ans1 =
            solve(landStartTime,
                  landDuration,
                  waterStartTime,
                  waterDuration);

        long long ans2 =
            solve(waterStartTime,
                  waterDuration,
                  landStartTime,
                  landDuration);

        return (int)min(ans1, ans2);
    }
};

int main()
{
    vector<int> landStartTime = {2, 8};
    vector<int> landDuration  = {4, 1};

    vector<int> waterStartTime = {6};
    vector<int> waterDuration  = {3};

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