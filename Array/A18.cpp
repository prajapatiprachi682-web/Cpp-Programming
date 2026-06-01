// Median of two sorted Array



#include <iostream>
using namespace std;

class Solution {
public:
    double medianOf2(int a[], int m, int b[], int n) {
        int temp[100];
        int i = 0, j = 0, k = 0;

        while (i < m && j < n) {
            if (a[i] <= b[j]) {
                temp[k++] = a[i++];
            } else {
                temp[k++] = b[j++];
            }
        }

        while (i < m) {
            temp[k++] = a[i++];
        }

        while (j < n) {
            temp[k++] = b[j++];
        }

        int size = k;

        if (size % 2 != 0) {
            return temp[size / 2];
        } else {
            return (temp[size / 2] + temp[(size / 2) - 1]) / 2.0;
        }
    }
};

int main() {
    int a[] = {1, 3, 5};
    int b[] = {2, 4, 6, 8};

    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);

    Solution obj;

    cout << "Median = " << obj.medianOf2(a, m, b, n);

    return 0;
}