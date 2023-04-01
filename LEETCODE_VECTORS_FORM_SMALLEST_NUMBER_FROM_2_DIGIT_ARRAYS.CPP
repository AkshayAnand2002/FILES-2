https://leetcode.com/contest/biweekly-contest-101/problems/form-smallest-number-from-two-digit-arrays/
class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        // unordered_map<int,int>mp;
        // for(int i=0;i<nums1.size();i++){
        //     mp[nums1[i]]++;
        // }
        // for(int j=0;j<nums2.size();j++){
        //     mp[nums2[j]]++;
        // }
        // if(nums1[0] != nums2[0]){
        //     return (nums1[0]+nums2[0]);
        // }
        // else{
        // for(int i=0;i<1;i++){
        //     for(int j=0;j<1;j++){
        //         if(nums1[i]<num2[j]){
        //             return (nums1[i]);
        //         }
        //         else{
        //             return to_string(nums2[i]);
        //         }
        //     }
        // } 
        // }
        int var=0;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    var=1;
                    return nums1[i];
                }
            }
        }
        int final=0;
        if(var==0){
            if(nums1[0]<nums2[0]){
                final=nums1[0]*10+nums2[0];
            }
            else{
                final=nums2[0]*10+nums1[0];
            }
        }
            return final;
    }
};
