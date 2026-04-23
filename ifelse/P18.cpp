#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double num;
    cout << "Enter a number: ";
    cin >> num;

    if (num >= 0) 
    {
        cout << "Square root = " << sqrt(num);
    }
    return 0;
}