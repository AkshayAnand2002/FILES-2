https://practice.geeksforgeeks.org/problems/missing-element-of-ap2228/1?page=2&difficulty[]=0&status[]=solved&category[]=Arrays&sortBy=submissions
class Solution{   
public:
    int findMissing(int arr[], int n) {
        int d1=arr[2]-arr[1];
        int d2=arr[1]-arr[0];
        int d=min(d1,d2);
        int answer=0;
        if(n==2){
            answer=(arr[0]+arr[1])/2;
        }
        for(int i=0;i<n-1;i++){
            if(arr[i+1] != arr[i]+d){
                answer=arr[i]+d;
            }
        }
        return answer;
    }
};
