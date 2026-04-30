#include <iostream>
using namespace std;

int main() {
    bool isLoggedIn = true;
    bool isAdmin = false;
    int securityLevel = 3;

    if (isLoggedIn && (isAdmin || securityLevel <= 2)) {
        cout << "Access granted.";
    } else {
        cout << "Access denied.";
    }

    return 0;
}