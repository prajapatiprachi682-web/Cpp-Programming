// ✅ Binary Search
// ✅ Binary Search on Partition
// ✅ Two Sorted Arrays
// ✅ K-th Element in Two Sorted Arrays
// ✅ CodeStudio - Ninja And Ladoos





#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int ninjaAndLadoos(vector<int> &row1,
                   vector<int> &row2,
                   int m,
                   int n,
                   int k)
{
    if(m > n)
        return ninjaAndLadoos(row2, row1, n, m, k);

    int low = max(0, k - n);
    int high = min(k, m);

    while(low <= high)
    {
        int cut1 = low + (high - low) / 2;
        int cut2 = k - cut1;

        int l1 = (cut1 == 0) ? INT_MIN : row1[cut1 - 1];
        int l2 = (cut2 == 0) ? INT_MIN : row2[cut2 - 1];

        int r1 = (cut1 == m) ? INT_MAX : row1[cut1];
        int r2 = (cut2 == n) ? INT_MAX : row2[cut2];

        if(l1 <= r2 && l2 <= r1)
            return max(l1, l2);

        else if(l1 > r2)
            high = cut1 - 1;

        else
            low = cut1 + 1;
    }

    return -1;
}

int main()
{
    vector<int> row1 = {2,3,6,7,9};
    vector<int> row2 = {1,4,8,10};

    cout << ninjaAndLadoos(row1, row2, 5, 4, 5);

    return 0;
}