https://www.interviewbit.com/problems/first-repeating-element/
int Solution::solve(vector<int> &A) {
    unordered_map<int,int>mp;
    for(int i=0;i<A.size();i++){
        mp[A[i]]++;
    }
    for(int i=0;i<A.size();i++){
        if(mp[A[i]]>1){
            return A[i];
        }
    }
    return -1;
}
