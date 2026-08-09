// ✅ Queue
// ✅ Simulation
// ✅ Circular Queue Rotation
// ✅ Greedy
// ✅ LeetCode 1700 - Number of Students Unable to Eat Lunch





#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int countStudents(vector<int>& students, vector<int>& sandwiches)
    {
        queue<int> q;

        for(int x : students)
            q.push(x);

        int i = 0;
        int rotate = 0;

        while(!q.empty() && rotate < q.size())
        {
            if(q.front() == sandwiches[i])
            {
                q.pop();
                i++;
                rotate = 0;
            }
            else
            {
                q.push(q.front());
                q.pop();
                rotate++;
            }
        }

        return q.size();
    }
};

int main()
{
    vector<int> students = {1,1,0,0};
    vector<int> sandwiches = {0,1,0,1};

    Solution obj;

    cout << obj.countStudents(students, sandwiches);

    return 0;
}