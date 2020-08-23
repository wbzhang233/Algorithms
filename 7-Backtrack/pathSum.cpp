//
// Created by wbzhang on 2020/8/6.
//

class Solution {
public:
    vector<vector<int>> res;
    int target;

    // dfs,当前节点root，当前路径vector<int>，当前路径之和currSum
    void dfs(TreeNode* root,vector<int> &currPath,int &currSum){
        // if(root==NULL) return;
        currPath.push_back(root->val);
        currSum += root->val;
        // 到达叶子节点
        if(root->left==NULL && root->right==NULL){
            if(currSum==target){
                res.push_back(currPath);
                return;
            }
        }

        // 递归调用-> 深度优先遍历
        if(root->left!=NULL){
            dfs(root->left,currPath,currSum);
        }

        if(root->right!=NULL){
            dfs(root->right,currPath,currSum);
        }
        // 返回父节点之前，删除该节点，执行回溯
        currSum -= currPath.back();
        currPath.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        if(root==NULL) return {};
        this->target = sum;
        vector<int> currPath;
        int currSum;
        dfs(root,currPath,currSum);
        return res;
    }

};


int main()
{


}