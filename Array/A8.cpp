#include <bits/stdc++.h>
using namespace std;

int findMax(const vector<int>& a) {
    int mx = a[0];
    for (int v : a) if (v > mx) mx = v;
    return mx;
}

int findMin(const vector<int>& a) {
    int mn = a[0];
    for (int v : a) if (v < mn) mn = v;
    return mn;
}

void reverseArray(vector<int>& a) {
    int i = 0, j = (int)a.size() - 1;
    while (i < j) {
        swap(a[i], a[j]);
        ++i; --j;
    }
}

int linearSearch(const vector<int>& a, int key) {
    for (int i = 0; i < (int)a.size(); ++i)
        if (a[i] == key) return i; // return first index (0-based)
    return -1;
}

long long sumAll(const vector<int>& a) {
    long long s = 0;
    for (int v : a) s += v;
    return s;
}

long long productAll(const vector<int>& a) {
    // If array may contain zero, product becomes zero accordingly.
    long long p = 1;
    for (int v : a) p *= v;
    return p;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cout << "Enter number of elements (n): ";
    if (!(cin >> n) || n <= 0) {
        cout << "Invalid n. Must be a positive integer.\n";
        return 0;
    }

    vector<int> a(n);
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; ++i) cin >> a[i];

    cout << "\nMaximum element: " << findMax(a) << '\n';
    cout << "Minimum element: " << findMin(a) << '\n';

    vector<int> a_reversed = a;      // keep original if you want
    reverseArray(a_reversed);
    cout << "Reversed array: ";
    for (int v : a_reversed) cout << v << ' ';
    cout << '\n';

    int key;
    cout << "Enter key to search (linear search): ";
    cin >> key;
    int pos = linearSearch(a, key);
    if (pos >= 0)
        cout << "Key " << key << " found at position (1-based): " << (pos + 1) << '\n';
    else
        cout << "Key " << key << " not found in the array.\n";

    cout << "Sum of all elements: " << sumAll(a) << '\n';
    cout << "Product of all elements: " << productAll(a) << '\n';

    return 0;
}