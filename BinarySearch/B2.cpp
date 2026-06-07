// Number of occurrence



#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(vector<int>& arr, int x)
{
    int low = 0, high = arr.size() - 1;
    int ans = -1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] == x)
        {
            ans = mid;
            high = mid - 1;
        }
        else if(arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

int lastOccurrence(vector<int>& arr, int x)
{
    int low = 0, high = arr.size() - 1;
    int ans = -1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] == x)
        {
            ans = mid;
            low = mid + 1;
        }
        else if(arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

int countOccurrences(vector<int>& arr, int n, int x)
{
    int first = firstOccurrence(arr, x);

    if(first == -1)
    {
        return 0;
    }

    int last = lastOccurrence(arr, x);

    return last - first + 1;
}

int main()
{
    vector<int> arr = {2, 4, 4, 4, 6, 8, 8};
    
    int n = arr.size();
    int x = 4;

    cout << "Count of " << x << " = "
         << countOccurrences(arr, n, x)
         << endl;

    return 0;
}