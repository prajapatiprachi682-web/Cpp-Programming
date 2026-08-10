// Total Occurrences using Linear Search


#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {4,6,4,7,4,8,4};

    int x = 4;

    int count = 0;

    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == x)
        {
            count++;
        }
    }

    cout << "Total occurrences: " << count;

    return 0;
}