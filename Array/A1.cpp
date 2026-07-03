// Array Declaration


// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {10, 20, 30, 40, 50};

//     return 0;
// }






// 2. Array Input & Output



// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5];

//     cout << "Enter 5 elements:\n";

//     for(int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Array Elements: ";

//     for(int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }




//3. Array Traversal (Print Array)


// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {10, 20, 30, 40, 50};

//     for(int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }




// 4. Reverse Traversal

#include <iostream>
using namespace std;

int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    for(int i = n - 1; i >= 0; i--) 
    {
        cout << arr[i] << " ";
    }

    return 0;
}