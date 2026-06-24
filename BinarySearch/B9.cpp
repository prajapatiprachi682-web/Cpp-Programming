// ✅ Binary Search on Answer
// ✅ Allocation Problems
// ✅ Greedy Validation
// ✅ Book Allocation Pattern
// ✅ CodeStudio - Ayush Gives Ninjatest





#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canStudy(vector<int> &time,
              int n,
              long long limit)
{
    int days = 1;
    long long currTime = 0;

    for(int chapter : time)
    {
        if(chapter > limit)
            return false;

        if(currTime + chapter <= limit)
        {
            currTime += chapter;
        }
        else
        {
            days++;
            currTime = chapter;
        }
    }

    return days <= n;
}

long long ayushGivesNinjatest(int n,
                              int m,
                              vector<int> time)
{
    long long low =
        *max_element(time.begin(), time.end());

    long long high = 0;

    for(int x : time)
        high += x;

    long long ans = high;

    while(low <= high)
    {
        long long mid =
            low + (high - low) / 2;

        if(canStudy(time, n, mid))
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

int main()
{
    vector<int> time = {10,20,30,40};

    int n = 2;
    int m = 4;

    cout << ayushGivesNinjatest(n, m, time);

    return 0;
}