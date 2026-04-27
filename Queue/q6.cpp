// First non repeating character



#include <iostream>
#include <queue>
#include <vector>
using namespace std;

string FirstNonRepeating(string s)
{
    queue<char> q;
    vector<int> freq(26, 0);
    string ans = "";

    for(int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        freq[ch - 'a']++;
        q.push(ch);

        while(!q.empty() && freq[q.front() - 'a'] > 1)
        {
            q.pop();
        }

        if(q.empty())
            ans += '#';
        else
            ans += q.front();
    }

    return ans;
}

int main()
{
    string s;

    cout << "Enter string: ";
    cin >> s;

    cout << "Output: " << FirstNonRepeating(s);

    return 0;
}