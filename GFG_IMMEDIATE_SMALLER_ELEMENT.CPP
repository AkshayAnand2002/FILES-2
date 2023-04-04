https://practice.geeksforgeeks.org/problems/immediate-smaller-element1142/1?page=1&difficulty[]=-1&category[]=Stack&sortBy=submissions
class Solution{
public:	
// 	void immediateSmaller(vector<int>&arr, int n) {
// 	    stack<int>s;
// 	    for(int i=n-1;i>=0;i--){
// 	        int data=arr[i];
// 	        if(s.size()>0 && s.top()<arr[i]){
// 	            arr[i]=s.top();
// 	        }
// 	        else{
// 	            arr[i]=-1;
// 	        }
// 	        s.push(data);
// 	    }
// 	}
     void immediateSmaller(vector<int>&arr, int n) {
        //  code here
        for(int i=0;i<n;i++){
            if(arr[i] > arr[i+1])arr[i] = arr[i+1];
            else arr[i] = -1;
        }
        arr[n-1] = -1;
    }

};
