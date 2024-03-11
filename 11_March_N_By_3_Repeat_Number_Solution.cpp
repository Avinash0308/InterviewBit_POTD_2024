#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int repeatedNumber(const vector<int> &A)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int cnt1 = 0, ele1 = INT_MIN, cnt2 = 0, ele2 = INT_MIN;
    for (int i = 0; i < A.size(); i++)
    {
        if (cnt1 == 0 && A[i] != ele2)
        {
            cnt1 = 1;
            ele1 = A[i];
        }
        else if (cnt2 == 0 && A[i] != ele1)
        {
            cnt2 = 1;
            ele2 = A[i];
        }
        else if (A[i] == ele1)
        {
            cnt1++;
        }
        else if (A[i] == ele2)
        {
            cnt2++;
        }
        else
        {
            cnt1--;
            cnt2--;
        }
    }
    int n = A.size();
    int count1 = 0, count2 = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == ele1)
        {
            count1++;
        }
        if (A[i] == ele2)
        {
            count2++;
        }
    }
    if (count1 > (n / 3))
    {
        return ele1;
    }
    if (count2 > (n / 3))
    {
        return ele2;
    }

    return -1;
}

int main()
{

    return 0;
}