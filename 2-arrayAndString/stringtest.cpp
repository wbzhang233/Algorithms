//
// Created by wbzhang on 2020/4/19.
//

// 字符串与数字的转换
// Created by wbzhang on 2020/3/12.
// 摘自博客：https://blog.csdn.net/u011251945/article/details/81609821?depth_1-utm_source=distribute.pc_relevant.none-task&utm_source=distribute.pc_relevant.none-task

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <sec_api/string_s.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


ListNode* partition(ListNode* head, int x) {
    ListNode* pNode = head;
    ListNode* qNode = head;

    while(qNode->val!=x){
        qNode=qNode->next;
    }

    ListNode* tmp = new ListNode(0);
    while(qNode!=NULL){
        if(qNode->val>x){
            tmp->val =  qNode->val;
            tmp->next = pNode->next;
            pNode->next = tmp;
        }
        qNode = qNode->next;
    }

    return head;
}

int main(){
    string string1 = "ilovezhangqi";
    int n;
    n = string1.find_first_of('a');
    cout<<"n:"<<n<<endl;

    ListNode* head = (ListNode*)malloc(sizeof(ListNode));//创建首元节点
    //首元节点先初始化
    head->val = 1;
    head->next = NULL;
    ListNode* cur = head; //头指针指向首元节点
    //从第二个节点开始创建
    for (int i=2; i<5; i++) {
        //创建一个新节点并初始化
        ListNode *a=(ListNode*)malloc(sizeof(ListNode));
        a->val = i;
        a->next=NULL;
        //将temp节点与新建立的a节点建立逻辑关系
        cur->next=a;
        //指针temp每次都指向新链表的最后一个节点，其实就是 a节点，这里写temp=a也对
        cur = cur->next;
    }


    ListNode* result =  partition(head, 3);


    return 0;
}