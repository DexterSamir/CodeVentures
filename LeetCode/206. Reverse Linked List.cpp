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
    ListNode* reverseList(ListNode* head) {
        ListNode* fakeHead = new ListNode(-1);
        reverse(head, fakeHead);
        return fakeHead->next;
    }
    
        ListNode* reverse(ListNode* node, ListNode* fakeHead){
        if (node == NULL)
            return fakeHead;
        else{
            ListNode* tail = reverse(node->next, fakeHead);
            tail->next = node;
            node->next = NULL;
            return node;
        }
    }
};
