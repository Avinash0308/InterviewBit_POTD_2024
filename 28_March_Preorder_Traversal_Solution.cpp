#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void solve(vector<int> &ans, TreeNode *a)
{
    if (!a)
        return;
    ans.push_back(a->val);
    solve(ans, a->left);
    solve(ans, a->right);
}
vector<int> preorderTraversal(TreeNode *A)
{
    vector<int> ans;
    solve(ans, A);
    return ans;
}

int main()
{
    return 0;
}