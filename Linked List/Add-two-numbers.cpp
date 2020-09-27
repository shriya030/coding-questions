https://leetcode.com/problems/add-two-numbers/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode *head = NULL;
        ListNode **temp = &head;
        while (l1 || l2 || carry) {
            int x = l1?l1->val:0;
            int y = l2?l2->val:0;
            if(l1)
                l1 = l1->next;
            if (l2)
                l2 = l2->next;
            int sum = x + y + carry;
            carry = sum / 10;
            ListNode *newnode = new ListNode;
            newnode->val = sum % 10;
            newnode->next = NULL;
            *temp = newnode;
            temp=&((*temp)->next);
        }
        return head;
    }
};
