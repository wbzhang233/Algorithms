//
// Created by wbzhang on 2020/9/29.
// leetcode No.25 K个一组反转链表

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	// 获取链表长度
	int getListLength(ListNode* head)
	{
		if(!head) return 0;
		return getListLength(head->next)+1;
	}

	// 打印链表
	void printList(ListNode* head)
	{
		if(head==NULL) return;
		cout<<head->val<<" ";
		printList(head->next);
	}

	// 局部反转该链表
	ListNode* reverseList(ListNode* head)
	{
		ListNode *pre = NULL,*curr = head;
		while(curr!=NULL){
			ListNode* tmp = curr->next;
			curr->next = pre;
			pre = curr;
			curr = tmp;
		}
		return pre;
	}

	ListNode* reverseKGroup(ListNode* head, int k) {
		// 特判
		int len = getListLength(head);
		if(k>len) return head; //k>len则不旋转
		if(k==len) return reverseList(head);

		// 找到第k个节点，并且切断，将后续翻转...（直到个数不足以反转位置）
		ListNode* kthNode = head;
		// k==1，则为本身，k=2，则往后移动一次
		while(k>1){
			kthNode = kthNode->next;
			--k;
		}
		cout<<"kth: "<<kthNode->val<<endl;
		// 切断
		ListNode* kNext = kthNode->next;
		cout<<"kNext: "<<kNext->val<<endl;
		kthNode->next = NULL;

		// 打印前k个节点
		cout<<"print..."<<endl;
		printList(head);
		cout<<endl;
		printList(kNext);

		ListNode* resHead = reverseList(head); // 反转前k个节点
		cout<<"print after..."<<endl;
		printList(resHead);

		cout<<"digui..."<<endl;
		kNext = reverseKGroup(kNext,k); //递归反转后半部分
		printList(kNext);

		head->next = kNext; // 反转前k个之后head为末尾
		return resHead;
	}
};