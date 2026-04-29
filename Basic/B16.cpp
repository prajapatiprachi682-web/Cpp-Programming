#include <iostream>
using namespace std;

int main() {
    int x = 5;

    ++x;
    cout << x << "\n";

    x = 5;
    --x;
    cout << x << "\n";

    x = 5;
    ++x;
    --x;
    cout << x << "\n";

    return 0;
}