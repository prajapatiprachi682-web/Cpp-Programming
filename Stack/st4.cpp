#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

string removeStars(string s)
{
    stack<char> st;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '*')
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }

    string result = "";

    while(!st.empty())
    {
        result.push_back(st.top());
        st.pop();
    }

    reverse(result.begin(), result.end());

    return result;
}

int main()
{
    string s;

    cout << "Enter string: ";
    cin >> s;

    cout << "Output: " << removeStars(s);

    return 0;
}