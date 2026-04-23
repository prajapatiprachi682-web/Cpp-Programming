// 10. Input three numbers and print the largest.


#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a == b && b == c)
    {
        cout << "All three numbers are equal: " << a;
    }
    else if (a > b && a > c)
    {
        cout << "Largest number is: " << a;
    }
    else if (b > a && b > c)
    {
        cout << "Largest number is: " << b;
    }
    else if (c > a && c > b)
    {
        cout << "Largest number is: " << c;
    }
    else if (a == b && a > c)
    {
        cout << "a and b are equal and largest: " << a;
    }
    else if (a == c && a > b)
    {
        cout << "a and c are equal and largest: " << a;
    }
    else if (b == c && b > a)
    {
        cout << "b and c are equal and largest: " << b;
    }
