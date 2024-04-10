#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> solve(TreeNode *A)
{
    vector<int> ans;
    queue<TreeNode *> q;
    q.push(A);
    while (!q.empty())
    {
        ans.push_back(q.front()->val);
        if (q.front()->val == -1)
        {
            q.pop();
            continue;
        }
        if (q.front()->left)
        {
            q.push(q.front()->left);
        }
        else
        {
            q.push(new TreeNode(-1));
        }
        if (q.front()->right)
        {
            q.push(q.front()->right);
        }
        else
        {
            q.push(new TreeNode(-1));
        }
        q.pop();
    }
    return ans;
}

int main()
{
    return 0;
}