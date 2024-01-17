#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &A, int B) {
    int n = A.size();
    int left = 0;
    int right = n - 1;
    int count = 0;

    while (left <= right) {
        int mid = (right + left) / 2;

        // Check if middle element is less than or equal to B
        if (A[mid] <= B) {

            // At least (mid + 1) elements are there whose values are less than or equal to B
            count = mid + 1;
            left = mid + 1;
        }

        // If B is smaller, ignore right half
        else
            right = mid - 1;
    }
    return count;
    
}
