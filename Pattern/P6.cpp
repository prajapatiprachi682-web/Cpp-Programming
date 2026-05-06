//    1   
//   121  
//  12321 
// 1234321





#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        // left spaces
        for (int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }

        // increasing numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // decreasing numbers
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j;
        }

        // right spaces
        for (int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }

        cout << endl;
    }

    return 0;
}