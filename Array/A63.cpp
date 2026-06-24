// ✅ Heap (Priority Queue)
// ✅ Min Heap
// ✅ Top K Elements
// ✅ Sorting
// ✅ K Largest Elements in an Array





#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> Klargest(vector<int> &a, int k, int n)
{
    priority_queue<int,
                   vector<int>,
                   greater<int>> pq;

    for(int x : a)
    {
        if(pq.size() < k)
        {
            pq.push(x);
        }
        else if(x > pq.top())
        {
            pq.pop();
            pq.push(x);
        }
    }

    vector<int> ans;

    while(!pq.empty())
    {
        ans.push_back(pq.top());
        pq.pop();
    }

    sort(ans.begin(), ans.end());

    return ans;
}

int main()
{
    vector<int> a = {1,23,12,9,30,2,50};

    int k = 3;

    vector<int> ans =
        Klargest(a, k, a.size());

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}