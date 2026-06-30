// ✅ Binary Search on Answer
// ✅ Arrays
// ✅ Greedy
// ✅ Consecutive Elements
// ✅ CodeStudio - Rose Garden





#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canMake(vector<int> &arr, int day, int k, int m)
{
    int flowers = 0;
    int bouquets = 0;

    for(int bloom : arr)
    {
        if(bloom <= day)
        {
            flowers++;

            if(flowers == k)
            {
                bouquets++;
                flowers = 0;
            }
        }
        else
        {
            flowers = 0;
        }
    }

    return bouquets >= m;
}

int roseGarden(vector<int> arr, int k, int m)
{
    long long need = 1LL * k * m;

    if(need > arr.size())
        return -1;

    int low = *min_element(arr.begin(), arr.end());
    int high = *max_element(arr.begin(), arr.end());

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(canMake(arr, mid, k, m))
            high = mid - 1;
        else
            low = mid + 1;
    }

    return low;
}

int main()
{
    vector<int> arr = {1,10,3,10,2};

    int k = 1;
    int m = 3;

    cout << roseGarden(arr, k, m);

    return 0;
}