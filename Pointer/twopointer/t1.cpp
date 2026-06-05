#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string &s)
{
    int left = 0;
    int right = s.size() - 1;

    while(left < right)
    {
        if(s[left] != s[right])
        {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main()
{
    string s = "madam";

    if(isPalindrome(s))
    {
        cout << s << " is a Palindrome" << endl;
    }
    else
    {
        cout << s << " is Not a Palindrome" << endl;
    }

    return 0;
}