//
// Created by wbzhang on 2020/9/18.
//

#ifndef ALGORITHMS_HELPERLIST_H
#define ALGORITHMS_HELPERLIST_H

#include <iostream>
using namespace std;

struct ListNode{
	int val;
	ListNode* next;
	ListNode(int _val):val(_val){
		this->next = NULL;
	};

};

// 递归打印链表
void printList(ListNode* head)
{
	if(head==NULL) return;
	cout<<head->val<<" ";
	printList(head->next);
}

// 反转打印链表
void rprintList(ListNode* head)
{
	if(head==NULL) return;
	rprintList(head->next);
	cout<<head->val<<" ";
}

// 获取链表长度
int getListLength(ListNode* head)
{
	if(!head) return 0;
	return getListLength(head->next)+1;
}

#endif //ALGORITHMS_HELPERLIST_H
