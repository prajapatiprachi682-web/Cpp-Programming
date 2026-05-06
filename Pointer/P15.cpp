#include <iostream>
using namespace std;

int main() {
    int numbers[10];   // array of 10 integers
    int *ptr = numbers; // pointer to array

    cout << "sizeof(numbers): " << sizeof(numbers) << " bytes" << endl;
    cout << "sizeof(ptr): " << sizeof(ptr) << " bytes" << endl;
    cout << "sizeof(*ptr): " << sizeof(*ptr) << " bytes" << endl;
    cout << "sizeof(&ptr): " << sizeof(&ptr) << " bytes" << endl;

    return 0;
}