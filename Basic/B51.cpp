#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int original = n;
    int rev = 0;

    // Reverse the number
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    // Check even and not palindrome
    if (original % 2 == 0 && original != rev) {
        cout << "Number is EVEN and NOT a palindrome";
    } else {
        cout << "Condition not satisfied";
    }

    return 0;
}