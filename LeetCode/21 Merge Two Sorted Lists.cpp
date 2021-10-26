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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* fakeNode = new ListNode(-1);
        ListNode* node = fakeNode;
        while (l1 != NULL && l2 != NULL){
            if (l1->val < l2->val){
                node->next = l1;
                l1 = l1->next;
                node = node->next;
            }//if
            else{
                node->next = l2;
                l2 = l2->next;
                node = node->next;
             }//else
        }//while l1 & l2
        if (l1 != NULL){
            node->next = l1;
        }
        else if (l2 != NULL){
            node->next = l2;
        }
        return fakeNode->next;
    }
    
};
