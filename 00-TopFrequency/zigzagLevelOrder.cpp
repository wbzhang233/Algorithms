// 高频面试题目：二叉树的锯齿形层次遍历
// wbzhang
// leetcode No.103

/* *
 * Definition for a binary tree node.
 * struct TreeNode
{
    *int val;
    *TreeNode *left;
    *TreeNode *right;
    *TreeNode(int x) : val(x), left(NULL), right(NULL){}
                                               *
}; */

#include <iostream>
#include <vector>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        if (root == NULL)
            return {};
        vector<vector<int>> res;
        queue<TreeNode *> q;
        q.push(root);

        bool rflag = false;
        while (!q.empty())
        {
            vector<int> vec;
            int n = q.size();
            while (n > 0)
            {
                TreeNode *fr = q.front();
                q.pop();
                vec.push_back(fr->val);
                if (fr->left != NULL)
                    q.push(fr->left);
                if (fr->right != NULL)
                    q.push(fr->right);
                n--;
            }
            if (rflag)
                reverse(vec.begin(), vec.end());
            rflag = !rflag;
            res.push_back(vec);
        }
        return res;
    }
};

int main()
{

    
}