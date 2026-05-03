// #include <iostream>
// using namespace std;

// int main() {
//     int sum = 0;

//     for (int i = 1; i <= 5; i++) {
//         sum = sum + i;
//     }

//     cout << "Sum is " << sum;

//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main() {
//     int n, sum = 0;

//     cout << "Enter a number: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         sum += i;
//     }

//     cout << "Sum of natural numbers from 1 to " << n << " is: " << sum;
//     return 0;
// }





#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, i = 1;

    cout << "Enter a number: ";
    cin >> n;

    while(i <= n) {
        sum += i;
        i++;
    }

    cout << "Sum = " << sum;
    return 0;
}