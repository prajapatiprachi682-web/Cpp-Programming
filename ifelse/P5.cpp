// 7. WAP to print all prime numbers from 1 to n.


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for (int num = 2; num <= n; num++)
    {
        bool isPrime = true;

        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << num << " ";
        }
    }
    return 0;
}
