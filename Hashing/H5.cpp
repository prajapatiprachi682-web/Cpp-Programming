// Frequency Count



#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> frequencyCount(vector<int>& arr)
    {
        int n = arr.size();

        vector<int> ans(n, 0);

        for(int num = 1; num <= n; num++)
        {
            int cnt = 0;

            for(int x : arr)
            {
                if(x == num)
                {
                    cnt++;
                }
            }

            ans[num - 1] = cnt;
        }

        return ans;
    }
};

int main()
{
    vector<int> arr = {2, 3, 2, 3, 5};

    Solution obj;

    vector<int> ans = obj.frequencyCount(arr);

    cout << "Frequency Array: ";

    for(int x : ans)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}