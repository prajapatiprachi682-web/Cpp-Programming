#include <iostream>
using namespace std;

int main() 
{
    int arr[] = {12, 45, 7, 89, 23};
    int n = 5;

    int max = arr[0];

    for(int i = 1; i < n; i++) 
    {
        if(arr[i] > max) 
        {
            max = arr[i];
        }
    }

    cout << "Maximum element = " << max;

    return 0;
}