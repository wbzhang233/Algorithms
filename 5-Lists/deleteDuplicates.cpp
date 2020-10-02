//
// Created by wbzhang on 2020/9/28.
//

#include <iostream>
#include <vector>
#include "../00-TopFrequency/helperList.h"
using namespace std;

class Solution {
public:
	ListNode *deleteDuplicates(ListNode *head) {
		if(!head) return NULL;
		if(!head->next) return head; // 特判

		// 哑巴节点
		ListNode *dummyNode = new ListNode(-1);
		ListNode *pre = dummyNode,*curr = head;

		int curr_num = curr->val;
		while(curr!=NULL && curr->next!=NULL)
		{
			curr_num = curr->val;
			if(curr->next->val != curr_num){
				ListNode* newNode =  new ListNode(curr_num);
				pre->next = newNode;
				pre = pre->next;

//				cout<<"once..."<<endl;
//				printList(dummyNode->next);
//				cout<<endl;
			}

			// 尋找下一個不同的值
			while(curr->val == curr_num && curr->next!=NULL){
				curr = curr->next;
			}

		}

		// 最後一個節點無法覆蓋到
		if(curr_num!=curr->val){
			pre->next = curr;
		}

//		cout<<"once..."<<endl;
//		printList(dummyNode->next);
//		cout<<endl;
		return dummyNode->next;
	}
};


int main()
{
	// 自選若干組測試用例如下：
//		vector<int> nums = {1,2,3,3,4,4,5};
	vector<int> nums = {1,2,2,3,3,4,4,5,5,5,5,5,5};
//	vector<int> nums = {1,2,3};
//	vector<int> nums = {};
//	vector<int> nums = {1};

	// 构建链表
	ListNode *head;
	if(nums.size()>0){
		head = new ListNode(nums[0] );
		ListNode *curr = head;

		for (int i = 1; i < nums.size(); ++i) {
			ListNode *newNode = new ListNode( nums[i] );
			curr->next = newNode;
			curr = curr->next;
		}

		printList(head);
		cout<<" ---" <<endl;
	}else{
		head = NULL;
	}

	Solution solu;
	ListNode* ans = solu.deleteDuplicates(head);
	cout<<"ans: "<<endl;
	printList(ans);

}
