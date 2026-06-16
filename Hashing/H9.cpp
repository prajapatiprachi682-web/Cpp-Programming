//  Union of Two Sorted Arrays



#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {

        int i = 0, j = 0;
        vector<int> ans;

        while(i < a.size() && j < b.size()) {

            if(a[i] <= b[j]) {

                if(ans.empty() || ans.back() != a[i])
                    ans.push_back(a[i]);

                i++;
            }
            else {

                if(ans.empty() || ans.back() != b[j])
                    ans.push_back(b[j]);

                j++;
            }
        }

        while(i < a.size()) {

            if(ans.empty() || ans.back() != a[i])
                ans.push_back(a[i]);

            i++;
        }

        while(j < b.size()) {

            if(ans.empty() || ans.back() != b[j])
                ans.push_back(b[j]);

            j++;
        }

        return ans;
    }
};

int main() {

    vector<int> a = {1, 2, 2, 3, 4};
    vector<int> b = {2, 3, 5};

    Solution obj;

    vector<int> ans = obj.findUnion(a, b);

    cout << "Union: ";

    for(int x : ans)
        cout << x << " ";

    cout << endl;

    return 0;
}