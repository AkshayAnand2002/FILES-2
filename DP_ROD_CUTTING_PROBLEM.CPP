https://practice.geeksforgeeks.org/problems/rod-cutting0840/1?utm_source=youtube&utm_medium=collabteam_anujbhaiya&utm_campaign=rodcutting
class Solution{
  public:
    int cutRod(int price[], int n) {
        int dp[n+1];
        dp[0]=0;
        for(int i=1;i<=n;i++){
            int max_val=INT_MIN;
            for(int j=1;j<=i;j++){
                max_val=max(max_val,price[j-1]+dp[i-j]);
            }
            dp[i]=max_val;
        }
        return dp[n];
        // for(int i=0;i<n;i++){
        //     cout<<dp[i]<<" ";
        // }
    }
};
//https://www.youtube.com/watch?v=KvAsKDtEiPk
