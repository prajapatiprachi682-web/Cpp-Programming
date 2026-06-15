// ✅ Segregate 0s and 1s



#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void segregate0and1(vector<int> &arr)
    {
        int left = 0;
        int right = arr.size() - 1;

        while(left < right)
        {
            while(left < right && arr[left] == 0)
                left++;

            while(left < right && arr[right] == 1)
                right--;

            if(left < right)
            {
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
        }
    }
};

int main()
{
    vector<int> arr = {0, 1, 0, 1, 1, 0, 0, 1};

    cout << "Original Array: ";
    for(int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    Solution obj;
    obj.segregate0and1(arr);

    cout << "After Segregation: ";
    for(int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}