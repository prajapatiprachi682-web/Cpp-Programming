// ✅ Binary Search on Answer
// ✅ Greedy
// ✅ Floating Point Binary Search
// ✅ Gas Stations
// ✅ CodeStudio / GFG - Minimize Max Distance to Gas Station





#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double minimiseMaxDistance(vector<int> &arr, int k)
{
    auto possible = [&](double dist)
    {
        int stations = 0;

        for(int i = 0; i < arr.size() - 1; i++)
        {
            stations += (int)((arr[i + 1] - arr[i]) / dist);

            if(fmod(arr[i + 1] - arr[i], dist) == 0)
            {
                stations--;
            }
        }

        return stations <= k;
    };

    double low = 0.0;
    double high = arr.back() - arr.front();

    while(high - low > 1e-6)
    {
        double mid = low + (high - low) / 2.0;

        if(possible(mid))
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }

    return high;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;

    cout << minimiseMaxDistance(arr, k);

    return 0;
}