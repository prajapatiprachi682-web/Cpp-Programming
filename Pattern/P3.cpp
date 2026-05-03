// #include <iostream>
// using namespace std;

// int main() {
//     for(char start = 'd'; start >= 'a'; start--) {
//         for(char ch = start; ch <= 'd'; ch++) {
//             cout << ch;
//         }
//         cout << endl;
//     }
//     return 0;
// }





#include <iostream>
using namespace std;

int main() {

    int endChar = 100; // ASCII of 'd'

    for(int start = endChar; start >= 97; start--) // 97 = 'a'
    {
        for(int ch = start; ch <= endChar; ch++)
        {
            cout << char(ch); // Convert ASCII to character
        }
        cout << endl;
    }

    return 0;
}