//  Adding One to Array



#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> addOne(vector<int>& arr)
    {
        int n = arr.size();

        for(int i = n - 1; i >= 0; i--)
        {
            if(arr[i] < 9)
            {
                arr[i]++;
                return arr;
            }

            arr[i] = 0;
        }

        arr.insert(arr.begin(), 1);

        return arr;
    }
};

int main()
{
    vector<int> arr = {9, 9, 9};

    Solution obj;

    vector<int> ans = obj.addOne(arr);

    cout << "After Adding One: ";

    for(int x : ans)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}