// ��ת����
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
	// ��������
	ListNode* curr = head;
	for (int i = 2; i < 10; ++i) {
		ListNode* newNode = new ListNode(i);
		curr->next = newNode;
		curr = curr->next;
	}
	// ��ת֮ǰ
	printf("%s\n","��ת֮ǰ...");
	printList(head);

	//��ת������
	reverseList(head);
	printf("\n%s\n","��ת֮��...");
	printList(head);

	return 0;
}