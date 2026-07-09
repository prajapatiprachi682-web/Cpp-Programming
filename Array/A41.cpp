// Array
// Most Frequent in a Limited Range Array
// GFG


#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxRepeating(int k, vector<int>& arr)
    {
        vector<int> freq(k, 0);

        for(int x : arr)
        {
            freq[x]++;
        }

        int ans = 0;

        for(int i = 1; i < k; i++)
        {
            if(freq[i] > freq[ans])
            {
                ans = i;
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> arr = {2, 3, 3, 5, 3, 4, 1, 7};
    int k = 8;

    Solution obj;

    cout << "Maximum Repeating Element = "
         << obj.maxRepeating(k, arr)
         << endl;

    return 0;
}