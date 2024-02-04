#include <bits/stdc++.h>
using namespace std;
int solve(int A, int B)
{
    int a = min(A - 1, B - 1);
    int b = min(A - 1, 8 - B);
    int c = min(8 - A, B - 1);
    int d = min(8 - A, 8 - B);
    return a + b + c + d;
}
