/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include "./common/common.h"

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        bool flag = false;

        ListNode *ans; //结果
        ListNode *it = ans;
        ListNode *it1 = l1, *it2 = l2;

        while (it1 != NULL && it2 != NULL)
        {
            // it->val = (it1->val + it2->val + flag)%10;
            ListNode *newNode = new ListNode((it1->val + it2->val + flag) % 10);
            it->next = newNode;
            it = it->next;

            if (it1->val + it2->val > 9)
            {
                flag = true;
            }
            it1 = it1->next;
            it2 = it2->next;
        }

        // 当l1没结束
        while (it1 != NULL)
        {
            ListNode *newNode = new ListNode((it1->val + flag) % 10);
            it->next = newNode;
            it = it->next;

            if (it1->val + flag > 9)
            {
                flag = true;
            }
            it1 = it1->next;
        }

        // 当l2没结束
        while (it2 != NULL)
        {
            ListNode *newNode = new ListNode((it2->val + flag) % 10);
            it->next = newNode;
            it = it->next;

            if (it2->val + flag > 9)
            {
                flag = true;
            }
            it2 = it2->next;
        }

        return ans->next;
    }
};

int main()
{

    return 0;
}