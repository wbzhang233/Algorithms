// 判断链表是否存在环，以及环的入口
// Created by wbzhang on 2020/9/18.
//

#include "../helperList.h"

// 判断链表是否存在环
bool havCycleList(ListNode* head)
{
	ListNode* fast = head->next;
	ListNode* slow = head;

	while(fast!=slow){
		if(fast==NULL || fast->next==NULL){
			return false; //到达终点
		}
		fast = fast->next->next;
		slow = slow->next;
	}

	return fast==slow; //如果相等，则存在环
}

int main()
{
	ListNode* head = new ListNode(1);
	// 构建链表
	ListNode* curr = head;
	ListNode* ent; // 环的入口
	for (int i = 2; i < 10; ++i) {
		ListNode* newNode = new ListNode(i);
		if(i==5) ent = newNode;
		curr->next = newNode;
		curr = curr->next;
	}
	curr->next = ent; // 将链表尾部链接到5号节点

	bool res = havCycleList(head);
	cout<<"res: "<<res<<endl;

	return 0;
}