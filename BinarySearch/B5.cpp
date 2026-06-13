// Guess Number higher or lower



#include <iostream>
using namespace std;

// Secret number
int pick = 6;

// LeetCode API
int guess(int num)
{
    if(num == pick)
        return 0;
    else if(num < pick)
        return 1;
    else
        return -1;
}

class Solution
{
public:
    int guessNumber(int n)
    {
        long long low = 1;
        long long high = n;

        while(low <= high)
        {
            long long mid = low + (high - low) / 2;

            int res = guess(mid);

            if(res == 0)
            {
                return mid;
            }
            else if(res == 1)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return -1;
    }
};

int main()
{
    int n = 10;

    Solution obj;

    cout << "Guessed Number = "
         << obj.guessNumber(n)
         << endl;

    return 0;
}