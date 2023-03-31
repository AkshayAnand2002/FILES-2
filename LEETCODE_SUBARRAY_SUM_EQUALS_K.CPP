https://leetcode.com/problems/subarray-sum-equals-k/description/
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int i,count=0,sum=0;
        mp[0]=1;
        for(i=0;i<nums.size();i++){
            sum+=nums[i];
            if(mp.find(sum-k) != mp.end()){
                //already present in map
                count+=mp[sum-k];
                //k is the req. sum
                //the no. of times sum-k occurs gives us the count
            }
            if(mp.find(sum) != mp.end()){
                mp[sum]++;
                //if a particular sum found again then count is increased by 1.
            }
            else{
                mp[sum]=1;
                //storing sum not already present in map.
            }
        }
        return count;
    }
};
//https://www.youtube.com/watch?v=zJ2SWDit0lM&t=865s
