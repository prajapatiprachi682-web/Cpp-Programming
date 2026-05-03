#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        // print spaces
        for (int s = 1; s <= (n - i) * 2; s++)
        {
            cout << " ";
        }

        // print increasing numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // print decreasing numbers
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}