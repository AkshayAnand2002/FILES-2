https://practice.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1?page=1&difficulty[]=-1&category[]=Dynamic%20Programming&sortBy=submissions
class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        vector<long long>v(n);
        v[0]=v[1]=1;
        for(int i=2;i<n;i++){
            v[i]=v[i-1]+v[i-2];
        }
        return v;
    }
};
