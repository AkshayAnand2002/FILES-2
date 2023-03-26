#include<iostream>
#include<climits>
using namespace std;
int mincoins_td(int n,int coins[],int T,int dp[]){
	//T different types of coins
	if(n==0){
		return 0;
	}
	if(dp[n] != 0){
		return dp[n];
	}
	int ans=INT_MAX;
	for(int i=0;i<T;i++){
		if(n-coins[i]>=0){
			int subprob=mincoins_td(n-coins[i],coins,T,dp);
			ans=min(ans,subprob+1);
		}
	}
	dp[n]=ans;
	return dp[n];
}
int mincoins_bu(int N,int coins[],int T){
	int dp[100]={0};
	for(int n=1;n<=N;n++){
		dp[n]=INT_MAX;
		for(int i=0;i<T;i++){
			if(n-coins[i]>=0){
				int subprob=dp[n-coins[i]];
				dp[n]=min(dp[n],subprob+1);
			}
		}
	}
	return dp[N];
}
int main(){
	int N=15;
	int coins[]={1,7,10};
	int dp[100]={0};
	int T=sizeof(coins)/sizeof(int);
	//cout<<mincoins_td(N,coins,T,dp)<<endl;
	cout<<mincoins_bu(N,coins,T)<<endl;
	return 0;
}
