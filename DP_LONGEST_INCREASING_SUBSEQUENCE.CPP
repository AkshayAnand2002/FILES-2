https://www.interviewbit.com/problems/longest-increasing-subsequence/
int Solution::lis(const vector<int> &A) {
    int answer=1,n=A.size();
    vector<int>dp(n,1);
    //dp array initialized with 1.
    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j--){
            //if any of the previous elements is smaller
            //we add 1 or take maximum.
            if(A[j]<A[i]){
                dp[i]=max(dp[i],dp[j]+1);
                //by method of LIS DP.
                answer=max(answer,dp[i]);
                //maximum of answer and highest ith element of DP array.
            }
        }
    }
    return answer;
}
//www.youtube.com/watch?v=EsgaVYo9McI
