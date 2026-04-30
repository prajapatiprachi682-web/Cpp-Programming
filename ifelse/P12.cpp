// #include <iostream>
// using namespace std;

// int main() {
//     int time = 20;

//     if (time < 18) {
//         cout << "Good day.";
//     } else {
//         cout << "Good evening.";
//     }

//     return 0;
// }





#include <iostream>
using namespace std;

int main() {
    int time = 16;

    bool isMorning = time < 12;
    bool isDay = time < 18;

    if (isMorning) {
        cout << "Good morning.";
    } 
    else if (isDay) {
        cout << "Good day.";
    } 
    else {
        cout << "Good evening.";
    }

    return 0;
}