// ✅ Queue
// ✅ Multiple Queues in One Array
// ✅ Arrays
// ✅ Linked List Simulation
// ✅ Coding Ninjas - K Queues in an Array





#include <bits/stdc++.h>
using namespace std;

vector<int> k_queues(int l, int n, int q, vector<vector<int>> &queries)
{
    vector<int> arr(l);
    vector<int> front(n + 1, -1);
    vector<int> rear(n + 1, -1);
    vector<int> next(l);

    for(int i = 0; i < l - 1; i++)
        next[i] = i + 1;

    next[l - 1] = -1;

    int freeSpot = 0;

    vector<int> ans;

    for(auto &it : queries)
    {
        if(it[0] == 1)
        {
            int m = it[1];
            int x = it[2];

            if(freeSpot == -1)
            {
                ans.push_back(-1);
                continue;
            }

            int index = freeSpot;
            freeSpot = next[index];

            arr[index] = x;

            if(front[m] == -1)
                front[m] = rear[m] = index;
            else
            {
                next[rear[m]] = index;
                rear[m] = index;
            }

            next[index] = -1;

            ans.push_back(0);
        }
        else
        {
            int m = it[1];

            if(front[m] == -1)
            {
                ans.push_back(-1);
                continue;
            }

            int index = front[m];

            ans.push_back(arr[index]);

            front[m] = next[index];

            if(front[m] == -1)
                rear[m] = -1;

            next[index] = freeSpot;
            freeSpot = index;
        }
    }

    return ans;
}

int main()
{
    int l = 6;
    int n = 3;

    vector<vector<int>> queries =
    {
        {1,1,10},
        {1,2,20},
        {1,1,30},
        {2,1},
        {2,2}
    };

    vector<int> ans = k_queues(l, n, queries.size(), queries);

    for(int x : ans)
        cout << x << " ";

    return 0;
}