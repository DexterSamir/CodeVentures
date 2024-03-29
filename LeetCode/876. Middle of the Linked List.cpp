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
    ListNode* middleNode(ListNode* head) {
        
        ListNode *onestep,*twostep;
        
        onestep=twostep=head;
        
        while( twostep && twostep->next){
            twostep = twostep->next->next;
            onestep = onestep->next;
        }
        
        return onestep;
        
    }
};
