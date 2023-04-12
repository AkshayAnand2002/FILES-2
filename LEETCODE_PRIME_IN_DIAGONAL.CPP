https://leetcode.com/problems/prime-in-diagonal/description/
class Solution {
public:
    bool isprime(int n){
        bool is_prime=true;
        if(n==0 || n==1){
            is_prime=false;
        }
        for(int i=2;i<=n/2;i++){
            if(n%i == 0){
                is_prime=false;
                break;
            }
        }
        return is_prime;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int n=nums.size(),maxim=0;
        for(int i=0;i<n;i++){
            if(nums[i][i]>maxim && isprime(nums[i][i])){
                maxim=nums[i][i];
            }
            if(nums[i][n-i-1]>maxim && isprime(nums[i][n-i-1])){
                maxim=nums[i][n-i-1];
            }
        }
        return maxim;
    }
};
