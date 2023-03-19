https://www.interviewbit.com/problems/swap-list-nodes-in-pairs/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    ListNode* current=A;
    ListNode* nex=NULL;
    ListNode* prev=NULL;
    int count=0;
    while(current != NULL && count<2){
        nex=current->next;
        current->next=prev;
        prev=current;
        current=nex;
        //ABOVE LINES ARE USED FOR REVERSING THE LINKED LIST.
        count++;
    }
    if(nex != NULL){
        A->next=swapPairs(nex);
        //RECURSIVELY FUNCTION IS CALLED TO REVERSE 2 ELEMENTS EACH.
    }
    return prev;
    //as at last prev points to head of linked list.
}
//https://www.youtube.com/watch?v=DCCBR--V5AAA
