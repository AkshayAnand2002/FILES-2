https://practice.geeksforgeeks.org/problems/count-numbers-containing-43022/1?page=1&difficulty[]=-1&category[]=Dynamic%20Programming&sortBy=submissions
class Solution {
  public:
    bool funct(int n){
        string str=to_string(n);
        int found=str.find("4");
        if(found==-1){
            return 0;
        }
        return 1;
    }
    int countNumberswith4(int N) {
        int count=0;
        for(int i=1;i<=N;i++){
            if(funct(i)==1){
                count++;
            }
        }
        return count;
    }
};
