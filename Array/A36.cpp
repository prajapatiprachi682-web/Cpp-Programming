// Array
// Third Largest Element
// GFG/Code360




#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution
{
public:
    int thirdLargest(vector<int> &arr)
    {
        int n = arr.size();

        if(n < 3)
            return -1;

        int first = INT_MIN;
        int second = INT_MIN;
        int third = INT_MIN;

        for(int x : arr)
        {
            first = max(first, x);
        }

        for(int x : arr)
        {
            if(x < first)
            {
                second = max(second, x);
            }
        }

        for(int x : arr)
        {
            if(x < second)
            {
                third = max(third, x);
            }
        }

        return (third == INT_MIN) ? -1 : third;
    }
};

int main()
{
    vector<int> arr = {5, 5, 4, 3, 2};

    Solution obj;

    cout << "Third Largest Element = "
         << obj.thirdLargest(arr)
         << endl;

    return 0;
}