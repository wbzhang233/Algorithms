//
// Created by wbzhang on 2020/9/18.
//

#include "../helperList.h"

// 设置哨兵节点
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
	// 构建链表
	ListNode *curr = head;
	ListNode *ent; // 环的入口
	for (int i = 2; i < 10; ++i) {
		ListNode *newNode = new ListNode(i);
		if (i == 5) ent = newNode;
		curr->next = newNode;
		curr = curr->next;
	}

	// 删除之前
	printf("%s\n", "删除之前...");
	printList(head);

	// 删除链表中的6号元素
	head = removeElements(head, 1);
	printf("\n%s\n", "删除之后...");
	printList(head);

	return 0;
}