#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int solve(TreeNode *h, int &ans)
{
    if (!h)
        return 0;
    int left = solve(h->left, ans);
    int right = solve(h->right, ans);
    ans = max({ans, h->val, h->val + left, h->val + right, h->val + left + right});
    return max({h->val, h->val + left, h->val + right});
}
int maxPathSum(TreeNode *A)
{
    int ans = INT_MIN;
    solve(A, ans);
    return ans;
}
