#include <iostream>
using namespace std;

int main() {
    double num;
    cout << "Enter a Number: ";
    cin >> num;

    int floorval, ceilval, roundval;

    floorval = (int)num;

    if (num > floorval)
        ceilval = floorval + 1;
    else
        ceilval = floorval;

    if (num - floorval >= 0.5)
        roundval = ceilval;
    else
        roundval = floorval;

    cout << "Floor Value = " << floorval << endl;
    cout << "Ceil Value = " << ceilval << endl;
    cout << "Round Value = " << roundval << endl;

    return 0;
}