#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i += 2) {
        sum += i;
    }

    cout << "Sum of all natural odd numbers up to " << n << " is: " << sum;
    return 0;
}




#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, i = 1;

    cout << "Enter a number: ";
    cin >> n;

    while(i <= n) {
        sum += i;
        i += 2;
    }

    cout << "Sum of all natural odd numbers up to " << n << " is: " << sum;
    return 0;
}





#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, i = 1;

    cout << "Enter a number: ";
    cin >> n;

    do {
        sum += i;
        i += 2;
    } while(i <= n);

    cout << "Sum of all natural odd numbers up to " << n << " is: " << sum;
    return 0;
}