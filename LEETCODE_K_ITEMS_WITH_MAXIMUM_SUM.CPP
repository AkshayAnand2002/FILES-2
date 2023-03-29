https://leetcode.com/contest/weekly-contest-338/problems/k-items-with-the-maximum-sum/
class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int answer=0;
        if(numOnes>0 && k>0){
            answer+=min(numOnes,k);
            k-=answer;
        }
        if(k>0 && numZeros>0){
            k-=min(k,numZeros);
            //0s don't change the sum.
        }
        if(k>0 && numNegOnes>0){
            answer-=min(k,numNegOnes);
        }
        return answer;
    }
};
// 1 1 1 0 -1 -1 -1 k=6
// 1 1 1 0 -1 -1
