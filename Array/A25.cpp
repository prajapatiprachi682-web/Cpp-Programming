// Cintains duplicate



#include <iostream>
#include <vector>
using namespace std;

bool checkDuplicate(vector<int> &arr, int n, int k)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n && j <= i + k; j++)
        {
            if(arr[i] == arr[j])
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    vector<int> arr = {1, 2, 3, 1, 4, 5};
    int n = arr.size();
    int k = 3;

    if(checkDuplicate(arr, n, k))
    {
        cout << "Duplicate Found Within K Distance" << endl;
    }
    else
    {
        cout << "No Duplicate Found Within K Distance" << endl;
    }

    return 0;
}