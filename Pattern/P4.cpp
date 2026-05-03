#include <iostream>
using namespace std;

int main()
{
    int n = 4;   // number of rows

    for (int i = 1; i <= n; i++)
    {
        // increasing numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // decreasing numbers
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}