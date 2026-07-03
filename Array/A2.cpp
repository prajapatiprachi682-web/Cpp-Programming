// 4. Sum of Array


// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {10, 20, 30, 40, 50};

//     int sum = 0;

//     for(int i = 0; i < 5; i++)
//     {
//         sum += arr[i];
//     }

//     cout << "Sum = " << sum;

//     return 0;
// }



//5. Product of Array


#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int product = 1;

    for(int i = 0; i < 5; i++)
    {
        product *= arr[i];
    }

    cout << "Product = " << product;

    return 0;
}