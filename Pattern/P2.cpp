#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    // Top line
    for(int i = 0; i < n; i++)
        cout << "*";
    cout << endl;

    // Middle lines
    for(int i = 0; i < n-2; i++) {
        cout << "*";
        for(int j = 0; j < n-1; j++)
            cout << " ";
        cout << endl;
    }

    // Bottom line
    for(int i = 0; i < n; i++)
        cout << "*";
    cout << endl;

    return 0;
}