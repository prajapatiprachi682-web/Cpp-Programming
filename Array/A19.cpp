// Remove duplicates from sorfted Array



#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &arr, int n)
    {
        vector<int> temp;

        temp.push_back(arr[0]);

        for(int i = 1; i < n; i++)
        {
            if(arr[i] != arr[i - 1])
            {
                temp.push_back(arr[i]);
            }
        }

        for(int i = 0; i < temp.size(); i++)
        {
            arr[i] = temp[i];
        }

        return temp.size();
    }
};

int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = arr.size();

    Solution obj;

    int k = obj.removeDuplicates(arr, n);

    cout << "Number of unique elements = " << k << endl;

    cout << "Array after removing duplicates: ";

    for(int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}