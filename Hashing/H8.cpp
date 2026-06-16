//  ✅ LeetCode 1346 - Check If N and Its Double Exist



#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool checkIfExist(vector<int>& arr)
    {
        unordered_map<int, int> freq;

        for(int num : arr)
        {
            freq[num]++;
        }

        for(int num : arr)
        {
            if(num == 0)
            {
                if(freq[0] > 1)
                {
                    return true;
                }
            }
            else
            {
                if(freq.count(2 * num))
                {
                    return true;
                }
            }
        }

        return false;
    }
};

int main()
{
    vector<int> arr = {10, 2, 5, 3};

    Solution obj;

    if(obj.checkIfExist(arr))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}