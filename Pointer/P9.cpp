// Two Pointer Technique




#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    int n = 5;

    int l = 0, r = n - 1;

    while(l < r)
    {
        cout << arr[l] << " " << arr[r] << endl;
        l++;
        r--;
    }

    return 0;
}