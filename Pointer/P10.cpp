// Sliding Window




#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    int k = 3;
    int sum = 0;

    int *p = arr;

    for(int i = 0; i < k; i++)
    {
        sum += *(p + i);
    }

    cout << "Sum of first window = " << sum << endl;

    return 0;
}