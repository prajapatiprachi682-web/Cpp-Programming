#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        int m = a.size();
        int n = b.size();

        vector<int> temp;
        int i = 0, j = 0;

        while (i < m && j < n) {
            if (a[i] <= b[j]) {
                temp.push_back(a[i++]);
            } else {
                temp.push_back(b[j++]);
            }
        }

        while (i < m) {
            temp.push_back(a[i++]);
        }

        while (j < n) {
            temp.push_back(b[j++]);
        }

        int size = temp.size();

        if (size % 2) {
            return temp[size / 2];
        } else {
            return (temp[size / 2] + temp[(size / 2) - 1]) / 2.0;
        }
    }
};

int main() {
    vector<int> a = {1, 3, 5};
    vector<int> b = {2, 4, 6, 8};

    Solution obj;

    cout << "Array 1: ";
    for (int x : a) {
        cout << x << " ";
    }

    cout << "\nArray 2: ";
    for (int x : b) {
        cout << x << " ";
    }

    cout << "\nMedian = " << obj.medianOf2(a, b) << endl;

    return 0;
}