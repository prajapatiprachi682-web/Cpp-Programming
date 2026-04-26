#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> firstNegInt(vector<int>& arr, int k)
{
    queue<int> q;
    vector<int> ans;

    int l = 0, r = 0;
    int n = arr.size();

    while(r < n)
    {
        if(arr[r] < 0)
        {
            q.push(r);
        }

        if(r - l + 1 == k)
        {
            if(!q.empty())
                ans.push_back(arr[q.front()]);
            else
                ans.push_back(0);

            if(!q.empty() && q.front() == l)
            {
                q.pop();
            }

            l++;   // always move left
        }

        r++;
    }

    return ans;
}

int main()
{
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter window size k: ";
    cin >> k;

    vector<int> result = firstNegInt(arr, k);

    cout << "First negative integer in every window: ";
    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}