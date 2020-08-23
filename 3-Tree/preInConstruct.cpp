//
// Created by wbzhang on 2020/6/29.
//
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* constructTree(vector<int> preorder,vector<int> inorder){
    if(preorder.size()*inorder.size()==0){
        return NULL;
    }
    // 1.根节点的值
    int rootValue = preorder[0];
    TreeNode* root = new TreeNode(rootValue);
    root->left = root->right = NULL;
    // 2.从中序遍历序列中寻找根节点的值
    int inRootInd = 0;
    for(int i=0;i<inorder.size();++i){
        if(inorder[i]==rootValue){
            inRootInd = i;
        }
    }

    // 然后分别根据某一段来重建左子树和右子树，再将其连接到根节点即可
    // int leftLength = inRootInd;
    if(inRootInd!=0){
        vector<int> leftPreVec(preorder.begin()+1,preorder.begin()+inRootInd+1);
        vector<int> leftInVec(inorder.begin(),inorder.begin()+inRootInd);
        root->left = constructTree(leftPreVec,leftInVec);
    }else root->left = NULL;

    if(inRootInd != inorder.size()-1){
        vector<int> rightPreVec(preorder.begin()+inRootInd+1,preorder.end());
        vector<int> rightInVec(inorder.begin()+inRootInd+1,inorder.end());
        root->right = constructTree(rightPreVec,rightInVec);
    }else root->right = NULL;

    return root;
}
TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    if(preorder.size()*inorder.size()==0 ) return NULL;
    return constructTree(preorder,inorder);
}


TreeNode* constructTree2(vector<int> preorder,vector<int> inorder,
                        int preStart,int preEnd, int inStart,int inEnd){
    //前序遍历的第一个节点为根节点
    TreeNode* root = new TreeNode(preorder[preStart]);
    root->left = root->right = NULL;

    // 中序遍历中寻找根节点所在位置
    int inRootInd = inStart;
    while(inRootInd<=inStart && (inorder[inRootInd]!=preorder[preStart]) ){
        inRootInd++;
    }
    // 分别重建左右子树
    int leftLength = inRootInd-inStart;
    if(inRootInd!=inStart){
        root->left = constructTree2(preorder,inorder,
                                   preStart+1,preStart+leftLength,inStart,inStart+leftLength-1);
    }
    int rightLength = preorder.size()-1-leftLength;
    if(inRootInd!=inEnd){
        root->right = constructTree2(preorder,inorder,
                                     preStart+leftLength+1,preEnd,inRootInd+1,inEnd);
    }
    return root;
}

//vector<int> leftPreVec(preorder.begin()+1,preorder.begin()+inRootInd+1);
//vector<int> leftInVec(inorder.begin(),inorder.begin()+inRootInd);
//
//vector<int> rightPreVec(preorder.begin()+inRootInd+1,preorder.end());
//vector<int> rightInVec(inorder.begin()+inRootInd+1,inorder.end());

TreeNode* buildTree2(vector<int>& preorder, vector<int>& inorder) {
    if(preorder.size()*inorder.size()==0)  return NULL;
    return constructTree2(preorder,inorder,0,preorder.size()-1,0,inorder.size()-1);
}

int main(){
//    vector<int> preorder={3,9,20,15,7};
//    vector<int> inorder={9,3,15,20,7};
//    TreeNode* root = buildTree(preorder,inorder);

    vector<int> preorder={1,2,3};
    vector<int> inorder={3,2,1};
    TreeNode* root = buildTree2(preorder,inorder);


    return 0;
}
