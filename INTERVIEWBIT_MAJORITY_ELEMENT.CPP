https://www.interviewbit.com/problems/majority-element/
int Solution::majorityElement(const vector<int> &A) {
    int count=A.size()/2;
    unordered_map<int,int>mp;
    vector<int>ans;
    for(auto i:A){
        mp[i]++;
    }
    for(auto num:mp){
        if(num.second>count){
            return num.first;
        }
    }
}
