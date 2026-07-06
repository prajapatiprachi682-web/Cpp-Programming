// 📌 Topic
// Binary Search on Answer
// Book Allocation
//📌 GFG
// ✅ Book Allocation Problem
//📌 Code360
//✅ Allocate Books




#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countStudents(vector<int>& arr, int pages)
{
    int students = 1;
    int pageSum = 0;

    for(int i = 0; i < arr.size(); i++)
    {
        if(pageSum + arr[i] <= pages)
        {
            pageSum += arr[i];
        }
        else
        {
            students++;
            pageSum = arr[i];
        }
    }

    return students;
}

int findPages(vector<int>& arr, int n, int m)
{
    if(m > n)
        return -1;

    int low = *max_element(arr.begin(), arr.end());

    int high = 0;

    for(int x : arr)
    {
        high += x;
    }

    for(int pages = low; pages <= high; pages++)
    {
        if(countStudents(arr, pages) <= m)
        {
            return pages;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {25, 46, 28, 49, 24};
    
    int n = arr.size();
    int m = 4;

    cout << "Minimum Pages = "
         << findPages(arr, n, m)
         << endl;

    return 0;
}