#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int product = 1;

    for(int i = 0; i < n; i++)
    {
        product = product * arr[i];
    }

    cout << "Product = " << product;

    return 0;
}





// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter elements:\n";
//     for(int i = 0; i < n; i++) cin >> arr[i];

//     int product = 1;
//     for(int i = 0; i < n; i++) {
//         product *= arr[i];
//     }

//     cout << "Product = " << product;
//     return 0;
// }