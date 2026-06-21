// ✅ 2D Array
// ✅ Matrix Manipulation
// ✅ Two Pointers
// ✅ Bit Manipulation (XOR)
// ✅ LeetCode 832 - Flipping an Image





#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

        for(auto &row : image)
        {
            int left = 0;
            int right = row.size() - 1;

            while(left <= right)
            {
                if(row[left] == row[right])
                {
                    row[left] ^= 1;

                    if(left != right)
                        row[right] ^= 1;
                }

                left++;
                right--;
            }
        }

        return image;
    }
};

int main()
{
    vector<vector<int>> image = {
        {1,1,0},
        {1,0,1},
        {0,0,0}
    };

    Solution obj;

    vector<vector<int>> ans = obj.flipAndInvertImage(image);

    for(auto &row : ans)
    {
        for(int x : row)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}