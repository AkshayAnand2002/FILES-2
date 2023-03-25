https://www.codingninjas.com/codestudio/problems/k-th-node-from-the-end-of-the-linked-list_1171164?leftPanelTab=0
#include <bits/stdc++.h> 
/*

Following is the Node Structure written below
 
class node
{
	public:
	int data;
    node * next;
	node(int x)
	{
		data=x;
		next=NULL;
	}
};
*/

node *findKthFromLast(node *head, int k)
{
	//initializing back and front pointer to head.
	node *back=head;
	node *front=head;
	//move front pointer k steps ahead
	for(int i=0;i<k;i++){
		front=front->next;
	}
	//move back and front pointer in parallel
	while(front != NULL){
		back=back->next;
		front=front->next;
	}
	//back will be pointing to kth node from last
	return back;
}
/*
Algorithm -->
In the naive approach, we have to traverse the linked list twice. We can solve the problem in a single traversal with the help of the algorithm stated below.
We will take two pointers ‘back’ and ‘front’ (Initialize both to head).
Move the ‘front’ pointer ‘k’ nodes ahead from the ‘back’ pointer.
Move both the pointers one step forward in parallel until the ‘front’ pointer reaches the end of the list.
Now, when the front pointer reaches the end, the back pointer will be pointing to the kth node from the end, hence we return the ‘back’ pointer.
Let us understand the above approach for the below-linked list for k=3.
//5->23->7->6->43->76->89
Step 1: Initialize back and front to head.

            *back=5 , *front=5.

Step 2: Move front three(k) steps ahead.

              *front=6.

Step 3: Move both pointers one by one until  ‘front’ reaches the end.

            *back=23 ,*front=43

            *back=7 , *front=76

            *back=6 , *front=89

            *back=43 , front=end

Step 4: ‘back’ points to the kth node from last. Therefore answer is 43. 

Time Complexity
O(n), where n is the total number of nodes.

We have to traverse the linked list till ‘front’ reaches the end. Therefore complexity is of order ‘n’.

Space Complexity
O(1)

Constant Space is used.
*/
