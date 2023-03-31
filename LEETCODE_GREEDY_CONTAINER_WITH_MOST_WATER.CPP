https://leetcode.com/problems/container-with-most-water/description/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int ans=0,diff;
        while(i<j){
            diff=min(height[i],height[j]);
            if(ans<(j-i)*diff){
                //taking larger area always.
                ans=(j-i)*diff;
            }
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};
