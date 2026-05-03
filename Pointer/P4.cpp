// sizeof in Function (Important Trap)




#include<iostream>
using namespace std;

void fun(int arr[])
{
    cout << "Size inside function = " << sizeof(arr) << endl; // pointer size
}

int main()
{
    int arr[5] = {1,2,3,4,5};

    cout << "Size in main = " << sizeof(arr) << endl; // full size
    fun(arr);

    return 0;
}