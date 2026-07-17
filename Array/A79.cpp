// ✅ Arrays
// ✅ Sorting
// ✅ Hashing
// ✅ Coordinate Compression
// ✅ LeetCode 1331 - Rank Transform of an Array




#include <bits/stdc++.h>
using namespace std;

vector<int> arrayRankTransform(vector<int>& arr)
{
    vector<int> temp = arr;

    sort(temp.begin(), temp.end());

    unordered_map<int,int> rank;

    int currRank = 1;

    for(int x : temp)
    {
        if(rank.find(x) == rank.end())
        {
            rank[x] = currRank;
            currRank++;
        }
    }

    vector<int> ans;

    for(int x : arr)
        ans.push_back(rank[x]);

    return ans;
}

int main()
{
    vector<int> arr = {40,10,20,30};

    vector<int> ans = arrayRankTransform(arr);

    for(int x : ans)
        cout << x << " ";

    return 0;
}