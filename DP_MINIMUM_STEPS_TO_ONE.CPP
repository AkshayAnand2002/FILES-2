#include<iostream>
#include<climits>
using namespace std;
//minimum steps to one
//n->n/3,n/2,n-1
//we can take any of the above steps to get to 1 with the min. no. of steps.
int minsteps_td(int n,int dp[]){//top-down approach
	if(n==1){
		//if already reached 1 then no need to take steps as final is reached.
		return 0;
	}
	if(dp[n] != 0){
		return dp[n];
		//lookup if n is already computed.
	}
	//compute if dp[n] is not known for the 1st elem.
	int opt1,opt2,opt3;
	opt1=opt2=opt3=INT_MAX;
	if(n%3==0){
		opt1=minsteps_td(n/3,dp)+1;
	}
	if(n%2==0){
		opt2=minsteps_td(n/2,dp)+1;
	}
	opt3=minsteps_td(n-1,dp)+1;
	int ans=min(min(opt1,opt2),opt3);
	return dp[n]=ans;
}
int minsteps_bu(int n){//bottom up approach
	int dp[100]={0};
	dp[1]=0;//i is reached so steps = 0.
	for(int i=2;i<=n;i++){
		int opt1,opt2,opt3;
		opt1=opt2=opt3=INT_MAX;
		if(n%3==0){
			opt1=dp[i/3]+1;
		}
		if(n%2==0){
			opt2=dp[i/2]+1;
		}
		opt3=dp[i-1]+1;
		dp[i]=min(min(opt1,opt2),opt3);
	}
	return dp[n];
}
int main(){
	int n;
	cin>>n;
	int dp[100]={0};
	//cout<<minsteps_td(n,dp);
	cout<<minsteps_bu(n)<<endl;
	return 0;
}
