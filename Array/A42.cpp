// Move all negative elements to end
// GFG/Code360



#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void segregateElements(vector<int>& arr)
    {
        vector<int> temp;

        // Positive and Zero elements
        for(int x : arr)
        {
            if(x >= 0)
            {
                temp.push_back(x);
            }
        }

        // Negative elements
        for(int x : arr)
        {
            if(x < 0)
            {
                temp.push_back(x);
            }
        }

        for(int i = 0; i < arr.size(); i++)
        {
            arr[i] = temp[i];
        }
    }
};

int main()
{
    vector<int> arr = {1, -2, 3, -4, 5, -6};

    Solution obj;

    cout << "Original Array: ";
    for(int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    obj.segregateElements(arr);

    cout << "After Segregation: ";
    for(int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}