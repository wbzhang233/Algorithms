//
// Created by wbzhang on 2020/7/8.
//

#ifndef ALGORITHMS_COMMON_H
#define ALGORITHMS_COMMON_H

#include <iostream>

#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <unordered_set>
#include <unordered_map>
#include <set>
#include <map>
#include <array>
#include <forward_list>

#include <algorithm>
#include <numeric>
#include <cmath>
#include <cctype>
#include <cstdio>

using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode ():val(0), next(nullptr){}
    ListNode (int _val):val(_val), next(nullptr){}
    ListNode (int _val,ListNode* _next):val(_val), next(_next){}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


#endif //ALGORITHMS_COMMON_H