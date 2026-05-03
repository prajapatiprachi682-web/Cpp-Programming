#include<iostream>
using namespace std;

int main()
{
    int a, b, temp;

    // Input values
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    cout << "\nBefore swapping: a = " << a << ", b = " << b << endl;

    // Swapping using third variable
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}