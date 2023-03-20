https://www.interviewbit.com/problems/remove-duplicates-from-sorted-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* head) {
    ListNode* curr = head;
        while(curr != NULL && curr->next != NULL){
            if(curr->val == curr->next->val){
                // same 
                ListNode* temp = curr->next;
                curr->next = temp->next;
                delete(temp);
            }else{
                curr = curr->next;
            }
        }
        return head;
}
//https://www.youtube.com/watch?v=CJakhxW-FVQ&t=39s
