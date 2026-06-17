//  Union of Two Sorted Arrays



#include <iostream>
#include <vector>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b)
{
    vector<int> ans;

    int i = 0, j = 0;

    while(i < a.size() && j < b.size())
    {
        if(a[i] <= b[j])
        {
            if(ans.empty() || ans.back() != a[i])
                ans.push_back(a[i]);

            i++;
        }
        else
        {
            if(ans.empty() || ans.back() != b[j])
                ans.push_back(b[j]);

            j++;
        }
    }

    while(i < a.size())
    {
        if(ans.empty() || ans.back() != a[i])
            ans.push_back(a[i]);

        i++;
    }

    while(j < b.size())
    {
        if(ans.empty() || ans.back() != b[j])
            ans.push_back(b[j]);

        j++;
    }

    return ans;
}

int main()
{
    vector<int> a = {1, 2, 2, 3, 4};
    vector<int> b = {2, 3, 5};

    vector<int> ans = sortedArray(a, b);

    cout << "Union Array: ";

    for(int x : ans)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}