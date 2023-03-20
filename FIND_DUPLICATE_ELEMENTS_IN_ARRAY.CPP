https://www.interviewbit.com/problems/find-duplicate-in-array/
int Solution::repeatedNumber(const vector<int> &v) {
    int slow=v[0];
    int fast=v[0];
    do{
        slow=v[slow];
        fast=v[v[fast]];
    }while(slow!=fast);
    fast=v[0];
    while(slow!=fast){
        fast=v[fast];
        slow=v[slow];
    }
    return slow<=0 ? -1 : slow;
}
//https://www.youtube.com/watch?v=pavdSf5f5pw
