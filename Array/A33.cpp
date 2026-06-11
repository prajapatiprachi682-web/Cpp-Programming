//  Longest Subarray of sum k



#include <iostream>
#include <vector>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k)
{
    int n = a.size();
    int ans = 0;

    for(int i = 0; i < n; i++)
    {
        long long sum = 0;

        for(int j = i; j < n; j++)
        {
            sum += a[j];

            if(sum == k)
            {
                ans = max(ans, j - i + 1);
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;

    cout << "Longest Subarray Length = "
         << longestSubarrayWithSumK(a, k)
         << endl;

    return 0;
}