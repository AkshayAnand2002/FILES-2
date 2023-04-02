/*
A party has been organized on cruise. The party is organized for limited time.
The no. of guests entering is E(i) and leaving L(i) at every hour is 
represented 
as elements of array.
Maximum no. of guests at any given instance within T hours.
INPUT:
5
7 0 5 1 3 <- no of guests enteing party
1 2 1 3 4 <- no. of guests leaving
OUTPUT:
8
7-1=6
6+0-2=4
4+5-1=8
8+1-3=6
6+3-4=5
maximum is 8. hence answer is 8.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v1(n);
    vector<int>v2(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }
    int answer=0;
    int maxim=INT_MIN;
    for(int i=0;i<n;i++){
        answer+=v1[i]-v2[i];
        maxim=max(answer,maxim);
    }
    cout<<maxim<<endl;
}
