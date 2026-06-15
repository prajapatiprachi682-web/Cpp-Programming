// Move Zeroes / Push Zeros To End



#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void pushZerosToEnd(vector<int>& arr)
    {
        vector<int> temp;

        for(int x : arr)
        {
            if(x != 0)
            {
                temp.push_back(x);
            }
        }

        int k = temp.size();

        for(int i = 0; i < k; i++)
        {
            arr[i] = temp[i];
        }

        for(int i = k; i < arr.size(); i++)
        {
            arr[i] = 0;
        }
    }
};

int main()
{
    vector<int> arr = {1, 0, 2, 0, 4, 3, 0, 5};

    cout << "Original Array: ";
    for(int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    Solution obj;
    obj.pushZerosToEnd(arr);

    cout << "After Pushing Zeros To End: ";
    for(int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}