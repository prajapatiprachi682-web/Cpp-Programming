#include <iostream>
using namespace std;

int main() {
    int temperature = 30;

    if (temperature < 0) {
        cout << "It's freezing!\n";
    } else if (temperature < 20) {
        cout << "It's cool.\n";
    } else {
        cout << "It's warm.\n";
    }

    return 0;
}