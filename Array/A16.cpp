// 2️⃣ strcpy() → Copy String


#include <iostream>
#include <cstring>
using namespace std;

int main() 
{

    char source[] = "Hello";
    char destination[100];

    strcpy(destination, source);

    cout << "Copied String = " << destination;

    return 0;
}