//
// Created by wbzhang on 2020/9/18.
//

#include "../helperList.h"

// �����ڱ��ڵ�
ListNode *removeElements(ListNode *head, int val) {
	ListNode *sentinel = new ListNode(0);
	sentinel->next = head;

	ListNode *prev = sentinel, *curr = head, *toDelete = nullptr;
	while (curr != nullptr) {
		if (curr->val == val) {
			prev->next = curr->next;
			toDelete = curr;
		} else prev = curr;

		curr = curr->next;

		if (toDelete != nullptr) {
			delete toDelete;
			toDelete = nullptr;
			break;
		}
	}

	ListNode *ret = sentinel->next;
	delete sentinel;
	return ret;
}

int main() {
	ListNode *head = new ListNode(1);
	// ��������
	ListNode *curr = head;
	ListNode *ent; // �������
	for (int i = 2; i < 10; ++i) {
		ListNode *newNode = new ListNode(i);
		if (i == 5) ent = newNode;
		curr->next = newNode;
		curr = curr->next;
	}

	// ɾ��֮ǰ
	printf("%s\n", "ɾ��֮ǰ...");
	printList(head);

	// ɾ�������е�6��Ԫ��
	head = removeElements(head, 1);
	printf("\n%s\n", "ɾ��֮��...");
	printList(head);

	return 0;
}