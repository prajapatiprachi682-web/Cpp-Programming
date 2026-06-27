// ✅ Strings
// ✅ Frequency Array (Hashing)
// ✅ Counting Sort
// ✅ Reverse Sorting
// ✅ GFG - Reverse Sort a String





#include <iostream>
#include <vector>
#include <string>
using namespace std;

string ReverseSort(string str)
{
    vector<int> freq(26, 0);

    for(char ch : str)
    {
        freq[ch - 'a']++;
    }

    string ans = "";

    for(int i = 25; i >= 0; i--)
    {
        while(freq[i]--)
        {
            ans += char(i + 'a');
        }
    }

    return ans;
}

int main()
{
    string str = "geeks";

    cout << ReverseSort(str);

    return 0;
}