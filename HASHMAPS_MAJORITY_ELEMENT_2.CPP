https://www.codingninjas.com/codestudio/problems/majority-element-ii_893027?leftPanelTab=0
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    vector<int>answer;
    unordered_map<int,int>mp;
    int n=arr.size();
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto it:mp){
        if(it.second>floor(n/3)){
            answer.push_back(it.first);
        }
    }
    return answer;
}
