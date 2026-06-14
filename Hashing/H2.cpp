//  Array Subset



#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool isSubset(vector<int> &a, vector<int> &b)
    {
        unordered_map<int, int> freq;

        for(int x : a)
        {
            freq[x]++;
        }

        for(int x : b)
        {
            if(freq[x] == 0)
            {
                return false;
            }

            freq[x]--;
        }

        return true;
    }
};

int main()
{
    vector<int> a = {11, 1, 13, 21, 3, 7};
    vector<int> b = {11, 3, 7, 1};

    Solution obj;

    if(obj.isSubset(a, b))
    {
        cout << "b is a subset of a" << endl;
    }
    else
    {
        cout << "b is not a subset of a" << endl;
    }

    return 0;
}