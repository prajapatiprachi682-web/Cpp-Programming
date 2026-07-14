// ✅ Arrays
// ✅ Nested Loops
// ✅ Brute Force
// ✅ Count Smaller Elements After Self
// ✅ Coding Ninjas - Count Number





#include <iostream>
#include <vector>
using namespace std;

vector<int> countNumber(int n, vector<int> &arr)
{
    vector<int> ans(n, 0);

    for(int i = 0; i < n; i++)
    {
        int cnt = 0;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[i])
                cnt++;
        }

        ans[i] = cnt;
    }

    return ans;
}

int main()
{
    vector<int> arr = {5,2,6,1};

    vector<int> ans = countNumber(arr.size(), arr);

    for(int x : ans)
        cout << x << " ";

    return 0;
}