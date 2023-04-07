https://practice.geeksforgeeks.org/problems/stock-buy-and-sell-1587115621/1?page=1&difficulty[]=0&category[]=Dynamic%20Programming&sortBy=submissions
class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        bool buy=0;
        vector<vector<int>>answer;
        int s;
        for(int i=0;i<n-1;i++){
            if(buy==0){
                if(A[i]<A[i+1]){
                    s=i;
                    buy=1;
                }
            }
            else{
                if(A[i]>A[i+1]){
                    answer.push_back({s,i});
                    buy=0;
                }
            }
        }
        //last stack which is bought but not sold
        if(buy==1){
            answer.push_back({s,n-1});
        }
        return answer;
    }
};
//https://www.youtube.com/watch?v=CYXgVuLNi0E
