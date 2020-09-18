// 反转链表
// Created by wbzhang on 2020/9/18.
//

#include "helperList.h"

void reverseList(ListNode* &head)
{
	ListNode* pre = NULL;
	ListNode* cur = head;

	while(cur!=NULL)
	{
		ListNode* tmp = cur->next;
		cur->next = pre;
		pre = cur;
		cur = tmp;
	}
	head = pre;
}


int main()
{
	ListNode* head = new ListNode(1);
	// 构建链表
	ListNode* curr = head;
	for (int i = 2; i < 10; ++i) {
		ListNode* newNode = new ListNode(i);
		curr->next = newNode;
		curr = curr->next;
	}
	// 反转之前
	printf("%s\n","反转之前...");
	printList(head);

	//反转该链表
	reverseList(head);
	printf("\n%s\n","反转之后...");
	printList(head);

	return 0;
}