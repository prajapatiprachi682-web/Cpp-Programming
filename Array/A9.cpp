#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int inter[10]; // Third array for intersection
    int k = 0;     // Index for intersection

    for(int i = 0; i < n1; i++)
    {
        for(int j = 0; j < n2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                inter[k++] = arr1[i];
            }
        }
    }

    cout << "Intersection Array: ";
    for(int i = 0; i < k; i++)
    {
        cout << inter[i] << " ";
    }

    return 0;
}