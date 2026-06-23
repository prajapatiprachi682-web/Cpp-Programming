#include <iostream>
using namespace std;

void print_num(int n) {
    if (n > 10) {
        return;
    }

    print_num(n + 1);
    cout << n << " ";
}

int main() {
    print_num(1);
    return 0;
}