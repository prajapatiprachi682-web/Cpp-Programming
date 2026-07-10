// Array
// Rearrange Array Alternating Positive and Negative Numbers
// GFG/code360




#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void rearrange(vector<int>& arr)
    {
        vector<int> pos, neg;

        for(int x : arr)
        {
            if(x >= 0)
                pos.push_back(x);
            else
                neg.push_back(x);
        }

        int i = 0, j = 0, k = 0;

        while(i < pos.size() && j < neg.size())
        {
            arr[k++] = pos[i++];
            arr[k++] = neg[j++];
        }

        while(i < pos.size())
        {
            arr[k++] = pos[i++];
        }

        while(j < neg.size())
        {
            arr[k++] = neg[j++];
        }
    }
};

int main()
{
    vector<int> arr = {9, 4, -2, -1, 5, 0, -5, -3, 2};

    Solution obj;
    obj.rearrange(arr);

    for(int x : arr)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}