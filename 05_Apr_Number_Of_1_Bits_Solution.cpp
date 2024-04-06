#include<bits/stdc++.h>
using namespace std;

int numSetBits(unsigned int A)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int ans = 0;
    int val = 1;
    for (int i = 0; i <= 31; i++)
    {
        if (A & val)
            ans++;
        val <<= 1;
    }
    return ans;
}

int main(){
    return 0;
}