// 6. WAP given a number check if it is prime or not.


// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int n;
//     bool isPrime = true;

//     cin >> n;

//     if(n <= 1)
//     {
//         isPrime=false;
//     }
//     else
//     {
//         for (int i = 2; i <= sqrt(n); i++)
//         {
//             if (n % i == 0)
//             {
//                 isPrime = false;
//                 break;
//             }
//         }
//     }

//     if(isPrime)
//     {
//         cout<<"Prime";
//     }
//     else
//     {
//         cout<<"Not Prime";
//     }
// }




#include <iostream>
using namespace std;

int main()
{
    int n, i;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1)
    {
        isPrime = false;
    }
    else
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
    {
        cout << "Number is Prime";
    }
    else
    {
        cout << "Number is Not Prime";
    }
    
    return 0;
}
