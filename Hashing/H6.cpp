// ✅ GFG - First Repeated Element



#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int firstRepeated(vector<int> &arr)
    {
        unordered_map<int, int> freq;

        for(int x : arr)
        {
            freq[x]++;
        }

        for(int i = 0; i < arr.size(); i++)
        {
            if(freq[arr[i]] > 1)
            {
                return i + 1;   // 1-based indexing
            }
        }

        return -1;
    }
};

int main()
{
    vector<int> arr = {1, 5, 3, 4, 3, 5, 6};

    Solution obj;

    cout << "First Repeated Element Position = "
         << obj.firstRepeated(arr)
         << endl;

    return 0;
}