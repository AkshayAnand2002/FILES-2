https://practice.geeksforgeeks.org/problems/queue-designer/1?page=1&difficulty[]=-1&category[]=Queue&sortBy=submissions
queue<int>_push(int arr[],int n)
{
   //return a queue with all elements of arr inserted in it
   queue<int>q;
   for(int i=0;i<n;i++){
       q.push(arr[i]);
   }
   return q;
}

void _pop(queue<int>s)
{
    //print front and dequeue for each element until it becomes empty
    while(s.size()>0){
        int value=s.front();
        cout<<value<<" ";
        s.pop();
    }
} 
