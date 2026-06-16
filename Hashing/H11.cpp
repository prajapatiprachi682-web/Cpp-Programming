//  Find duplicates in array



#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findDuplicate(vector<int> &arr)
{
    unordered_map<int,int> mp;

    for(int num : arr)
    {
        mp[num]++;

        if(mp[num] > 1)
            return num;
    }

    return -1;
}

int main()
{
    vector<int> arr = {1, 3, 4, 2, 2};

    cout << "Duplicate Element = "
         << findDuplicate(arr)
         << endl;

    return 0;
}