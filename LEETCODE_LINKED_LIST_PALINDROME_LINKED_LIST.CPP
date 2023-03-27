https://leetcode.com/problems/palindrome-linked-list/description/
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
    ListNode* findmid(ListNode* head){
        ListNode *slow=head,*fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* reverselist(ListNode* head){
        if(head==NULL){
            return head;
        }
        ListNode* current=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        while(current != NULL){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        return prev;
    }
    bool comparelist(ListNode* head1,ListNode* head2){
        while(head1 !=NULL && head2 != NULL){
            if(head1->val != head2->val){
                return false;
            }
            head1=head1->next;
            head2=head2->next;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return true;
        }
        ListNode* h=head;
        ListNode* mid=findmid(h);
        ListNode* h2=reverselist(mid);
        return comparelist(h,h2);
    }
};
//https://www.youtube.com/watch?v=nNWI9JinAnc
