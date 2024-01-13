#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for binary tree*/
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<TreeNode *> solve(int low, int high, map<pair<int, int>, vector<TreeNode *>> &m)
{
    if (low > high)
        return {NULL};
    if (m.find({low, high}) != m.end())
        return m[{low, high}];
    vector<TreeNode *> ans;
    for (int i = low; i <= high; i++)
    {
        vector<TreeNode *> left = solve(low, i - 1, m);
        vector<TreeNode *> right = solve(i + 1, high, m);
        for (auto l : left)
        {
            for (auto r : right)
            {
                TreeNode *cur = new TreeNode(i);
                cur->left = l;
                cur->right = r;
                ans.push_back(cur);
            }
        }
    }
    return m[{low, high}] = ans;
}
vector<TreeNode *> generateTrees(int A)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    map<pair<int, int>, vector<TreeNode *>> m;
    return solve(1, A, m);
}