#include <iostream>
using namespace std;

int main()
{
    int sum = 0;

    for (int i = 1; i <= 200; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << i << " ";
            sum += i;
        }
    }

    cout << "\nSum = " << sum;
    return 0;
}