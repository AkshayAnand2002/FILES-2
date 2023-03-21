https://www.interviewbit.com/problems/perfect-peak-of-array/
int Solution::perfectPeak(vector<int> &A) {
    int n=A.size();
    int maxi=A[0];
    vector<int>suffix(n+5,INT_MAX);
    suffix[n-1]=A[n-1];
    for(int i=n-2;i>=0;i--){
        suffix[i]=min(suffix[i+1],A[i+1]);
    }
    for(int i=1;i<n-1;i++){
        int current=A[i];
        if(current>maxi && current<suffix[i]){
            return 1;
        }
        maxi=max(maxi,current);
    }
    return 0;
}
//https://www.youtube.com/watch?v=0Ap5NJCsTOE
