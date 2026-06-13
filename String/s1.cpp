// Weighted word mapping



#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string mapWordWeights(vector<string>& words,
                          vector<int>& weights)
    {
        string ans;

        for(string &word : words)
        {
            long long sum = 0;

            for(char ch : word)
            {
                sum += weights[ch - 'a'];
            }

            int rem = sum % 26;

            ans.push_back('z' - rem);
        }

        return ans;
    }
};

int main()
{
    vector<string> words = {"abc", "cat", "dog"};

    vector<int> weights =
    {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        11, 12, 13, 14, 15, 16, 17, 18,
        19, 20, 21, 22, 23, 24, 25, 26
    };

    Solution obj;

    string result = obj.mapWordWeights(words, weights);

    cout << "Result String = " << result << endl;

    return 0;
}