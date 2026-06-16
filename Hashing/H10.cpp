//  ✅ Intersection of Two Arrays



#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int intersectSize(vector<int> &a, vector<int> &b) {

        unordered_set<int> st(a.begin(), a.end());

        int count = 0;

        for(int x : b) {

            if(st.count(x)) {
                count++;
            }
        }

        return count;
    }
};

int main() {

    vector<int> a = {1, 2, 4, 3, 5, 6};
    vector<int> b = {3, 4, 5, 6, 7};

    Solution obj;

    cout << "Intersection Count = "
         << obj.intersectSize(a, b)
         << endl;

    return 0;
}