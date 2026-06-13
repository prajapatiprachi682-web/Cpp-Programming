#include <iostream>
using namespace std;

char highestOccurringChar(char input[])
{
    int freq[26] = {0};

    for(int i = 0; input[i] != '\0'; i++)
    {
        freq[input[i] - 'a']++;
    }

    int maxFreq = 0;
    char ans;

    for(int i = 0; input[i] != '\0'; i++)
    {
        if(freq[input[i] - 'a'] > maxFreq)
        {
            maxFreq = freq[input[i] - 'a'];
            ans = input[i];
        }
    }

    return ans;
}

int main()
{
    char input[] = "abdefgbabfba";

    cout << "Highest Occurring Character = "
         << highestOccurringChar(input)
         << endl;

    return 0;
}