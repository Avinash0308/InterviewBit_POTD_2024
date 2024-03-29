#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void solve(TreeNode *a, int cur, int &ans)
{
    if (a == NULL)
    {
        ans = max(ans, cur);
        return;
    }
    solve(a->left, cur + 1, ans);
    solve(a->right, cur + 1, ans);
}
int maxDepth(TreeNode *A)
{
    int ans = 0;
    int cur = 0;
    solve(A, cur, ans);
    return ans;
}

int main()
{
    return 0;
}