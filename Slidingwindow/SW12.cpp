// ✅ Strings
// ✅ Sliding Window
// ✅ Two Pointers
// ✅ Hashing (Frequency Array)
// ✅ GFG - Count Substrings with Exactly K Distinct Characters





#include <iostream>
#include <vector>
#include <string>
using namespace std;

long long atMostK(string &str, int k)
{
    if(k < 0)
        return 0;

    vector<int> freq(26, 0);

    int left = 0;
    int distinct = 0;
    long long ans = 0;

    for(int right = 0; right < str.size(); right++)
    {
        if(freq[str[right] - 'a'] == 0)
            distinct++;

        freq[str[right] - 'a']++;

        while(distinct > k)
        {
            freq[str[left] - 'a']--;

            if(freq[str[left] - 'a'] == 0)
                distinct--;

            left++;
        }

        ans += (right - left + 1);
    }

    return ans;
}

int countSubStrings(string str, int k)
{
    return atMostK(str, k) - atMostK(str, k - 1);
}

int main()
{
    string str = "pqpqs";

    int k = 2;

    cout << countSubStrings(str, k);

    return 0;
}