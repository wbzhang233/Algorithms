// 高频面试题：完美二叉树连接下一个节点
// wbzhang233
// leetcode No.116

#include <iostream>
#include <vector>

using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return NULL;

        Node* leftMost = root;
        while(leftMost->left!=NULL){
            Node* head =  leftMost;
            while(head!=NULL){
                head->left->next = head->right;
                if(head->next!=NULL)
                    head->right->next = head->next->left;

                head = head->next;
            }
            leftMost = leftMost->left;
        }
        return root;
    }
};