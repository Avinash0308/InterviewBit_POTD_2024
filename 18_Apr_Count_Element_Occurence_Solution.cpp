#include <bits/stdc++.h>
using namespace std;

int findCount(const vector<int> &arr, int number)
{
    int start = 0, end = arr.size() - 1, mid, first = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == number)
        {
            first = mid;

            end = mid - 1;
        }
        else if (arr[mid] > number)
        {
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    start = 0;
    end = arr.size() - 1;
    mid = 0;
    int last = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == number)
        {
            last = mid;

            start = mid + 1;
        }
        else if (arr[mid] > number)
        {
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    if (last < 0 && first < 0)
    {
        return 0;
    }
    else
        return last - first + 1;
}

int main()
{
    return 0;
}