#include <iostream>
#include <cstring>
using namespace std;

void removeConsecutiveDuplicates(char *input)
{
    if(input[0] == '\0')
    {
        return;
    }

    removeConsecutiveDuplicates(input + 1);

    if(input[0] == input[1])
    {
        int i = 0;

        while(input[i] != '\0')
        {
            input[i] = input[i + 1];
            i++;
        }
    }
}

int main()
{
    char input[100] = "aabccba";

    cout << "Original String : " << input << endl;

    removeConsecutiveDuplicates(input);

    cout << "After Removing Consecutive Duplicates : "
         << input << endl;

    return 0;
}