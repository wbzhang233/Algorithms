//
// Created by wbzhang on 2020/7/27.
//

#include "../common/common.h"

TreeNode* searchBST(TreeNode* root, int val) {
    if(root==NULL) return NULL;
    else if(root->val==val) return root;
    else if(root->val<val) return searchBST(root->right,val);
    return searchBST(root->left,val);
}

TreeNode* findSuccessor(TreeNode* root){
    if(root==NULL) return NULL;
    else if(root->left==NULL ) return root;
    return findSuccessor(root->left);
}


TreeNode* deleteNode(TreeNode* root, int key) {
    if(root==NULL) return NULL;
    TreeNode* tarNode = searchBST(root,key);
    if(tarNode==NULL) return root;//没找到，直接返回
    else if(tarNode->left==NULL && tarNode->right==NULL) delete tarNode;//没有子节点，删除
    else if(tarNode->left!=NULL && tarNode->right==NULL){
        swap(tarNode,tarNode->left);
        delete tarNode->left;
    }  // 只有左子树存在
    else if(tarNode->right!=NULL){
        TreeNode* leftSuccessor = findSuccessor(tarNode->right);
        swap(tarNode,leftSuccessor);
        delete leftSuccessor;
    } //右子树存在
    return root;
}

int main(){


    return 0;
}

///以下为
