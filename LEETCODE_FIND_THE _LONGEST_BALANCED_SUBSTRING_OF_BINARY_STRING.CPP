https://leetcode.com/contest/weekly-contest-339/problems/find-the-longest-balanced-substring-of-a-binary-string/
class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int answer=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                int zero=0,one=0;
                while(i<s.size() && s[i]=='0'){
                    i++;
                    zero++;
                }
                while(i<s.size() && s[i]=='1'){
                    i++;
                    one++;
                }
                --i;
                int len=min(zero,one);
                answer=max(answer,2*len);
            }
        }
        return answer;
    }
};
