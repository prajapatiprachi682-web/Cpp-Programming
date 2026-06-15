//  Type of Array



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int typeOfArr(vector<int>& arr)
    {
        int n = arr.size();

        int inc = 0;
        int dec = 0;

        for(int i = 0; i < n; i++)
        {
            int next = (i + 1) % n;

            if(arr[i] > arr[next])
                dec++;
            else
                inc++;
        }

        if(dec == 1)
        {
            int mn = *min_element(arr.begin(), arr.end());

            return (arr[0] == mn) ? 1 : 4;
        }

        int mx = *max_element(arr.begin(), arr.end());

        return (arr[0] == mx) ? 2 : 3;
    }
};

int main()
{
    vector<int> arr = {3, 4, 5, 1, 2};

    Solution obj;

    cout << "Array Type = "
         << obj.typeOfArr(arr)
         << endl;

    return 0;
}