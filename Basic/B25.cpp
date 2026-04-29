#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 9;

    cout << (x > y) << "\n";

    x = 10;
    cout << (x == 10) << "\n";

    bool isGreater = x > y;
    cout << isGreater << "\n";

    return 0;
}