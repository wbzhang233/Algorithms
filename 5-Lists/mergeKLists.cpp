//
// Created by wbzhang on 2020/9/29.
// 合并K个有序链表 leetcode No.23

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
	// 合并两个有序链表
	ListNode* mergeTwolists(ListNode* la,ListNode* lb){
		if(la==nullptr) return lb;
		if(lb==nullptr) return la;

		if(la->val < lb->val){
			la->next = mergeTwolists(la->next,lb);
			return la;
		}
		lb->next = mergeTwolists(la,lb->next);
		return lb;
	}

	// 分治合并(闭区间)
	ListNode* merge(vector<ListNode*>& lists ,int low,int high)
	{
		if(low == high) return lists[low];
		if(low >high) return NULL;

		int mid = low + (high-low)/2;
		ListNode* left =  merge(lists,low,mid); // 分治合并
		ListNode* right =  merge(lists,mid+1,high); // 分治合并

		return mergeTwolists(left,right);
	}

	// 合并K个有序链表
	ListNode* mergeKLists(vector<ListNode*>& lists) {
		return merge(lists,0,lists.size()-1 );
	}

};