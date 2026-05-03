#include <iostream>
using namespace std;

int main() {

    // 1
    int a1 = 5;
    cout << "1: " << a1++ << endl;

    // 2
    int a2 = 5;
    cout << "2: " << ++a2 << endl;

    // 3
    int a3 = 10;
    a3++;
    ++a3;
    cout << "3: " << a3 << endl;

    // 4
    int a4 = 3, b4;
    b4 = a4++;
    cout << "4: " << a4 << " " << b4 << endl;

    // 5
    int a5 = 3, b5;
    b5 = ++a5;
    cout << "5: " << a5 << " " << b5 << endl;

    // 6
    int a6 = 5;
    cout << "6: " << a6++ + ++a6 << endl;

    // 7
    int x7 = 4;
    int y7 = x7++ + ++x7 + x7++;
    cout << "7: " << y7 << endl;

    // 8
    int x8 = 2, y8 = 5;
    y8 = x8++ + ++x8;
    cout << "8: " << x8 << " " << y8 << endl;

    // 9
    int a9 = 7;
    cout << "9: " << ++a9 + a9++ + --a9 + a9-- << endl;

    // 10
    int a10 = 10;
    int b10 = --a10 + a10-- + ++a10 + a10++;
    cout << "10: " << a10 << " " << b10 << endl;

    // 11
    int a11 = 5;
    cout << "11: " << a11-- << " " << a11 << endl;

    // 12
    int x12 = 10;
    int y12 = --x12 + x12-- + ++x12;
    cout << "12: " << x12 << " " << y12 << endl;

    return 0;
}