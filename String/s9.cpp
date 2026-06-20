// ✅ Strings
// ✅ Greedy
// ✅ Alternating Binary String
// ✅ GFG - Beautiful String






#include <iostream>
#include <string>
using namespace std;

int makeBeautiful(string str)
{
    int startWith0 = 0;
    int startWith1 = 0;

    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] != ((i % 2 == 0) ? '0' : '1'))
            startWith0++;

        if(str[i] != ((i % 2 == 0) ? '1' : '0'))
            startWith1++;
    }

    return min(startWith0, startWith1);
}

int main()
{
    string str = "1001";

    cout << makeBeautiful(str);

    return 0;
}