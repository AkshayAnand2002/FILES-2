https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *slow=head,*fast=head;
        while(n--){
            fast=fast->next;
            //updating fast ptr
        }
        if(fast==NULL){
            return slow->next;
            //for some cases.
        }
        while(fast->next != NULL){
            slow=slow->next;
            fast=fast->next;
            //moving ptrs till condition is true.
        }
        slow->next=slow->next->next;
        //step based on algo https://www.youtube.com/watch?v=MzhI-u2h0-w&list=PLzjZaW71kMwQ1DIWTn0d_KDHU4_E52-rq&index=23
        return head;
        //required elem is deleted.
    }
};
//https://www.youtube.com/watch?v=MzhI-u2h0-w&list=PLzjZaW71kMwQ1DIWTn0d_KDHU4_E52-rq&index=23
