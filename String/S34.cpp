// ✅ Strings
// ✅ String Concatenation
// ✅ String Matching
// ✅ Rotation Check
// ✅ Code360 - Check If One String Is A Rotation Of Another String





#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int isCyclicRotation(string &p, string &q)
    {
        if(p.size() != q.size())
            return 0;

        string temp = p + p;

        return temp.find(q) != string::npos;
    }
};

int main()
{
    string p = "abac";
    string q = "baca";

    Solution obj;

    cout << obj.isCyclicRotation(p, q);

    return 0;
}