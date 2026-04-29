#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "Hello";

    for (char c : word) {
        cout << c << "\n";
    }

    return 0;
}