// ✅ Stack
// ✅ Strings
// ✅ Greedy
// ✅ Balanced Brackets
// ✅ CodeStudio - Minimum Cost to Make String Valid





#include <iostream>
#include <stack>
#include <string>
using namespace std;

int findMinimumCost(string str)
{
    int n = str.length();

    if(n % 2 == 1)
        return -1;

    stack<char> st;

    for(char ch : str)
    {
        if(ch == '{')
        {
            st.push(ch);
        }
        else
        {
            if(!st.empty() && st.top() == '{')
                st.pop();
            else
                st.push(ch);
        }
    }

    int open = 0;
    int close = 0;

    while(!st.empty())
    {
        if(st.top() == '{')
            open++;
        else
            close++;

        st.pop();
    }

    return (open + 1) / 2 + (close + 1) / 2;
}

int main()
{
    string str = "}{{}}{{{";

    cout << findMinimumCost(str);

    return 0;
}