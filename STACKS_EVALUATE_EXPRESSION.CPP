https://www.interviewbit.com/problems/evaluate-expression/
int Solution::evalRPN(vector<string> &A) {
    stack<int>s;
    int n=A.size();
    for(int i=0;i<n;i++){
        if(A[i]=="+" || A[i]=="-" || A[i]=="*" || A[i]=="/"){
            //evaluate when signs encountered.
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            int ans;
            if(A[i]=="+"){
                ans=a+b;
            }
            else if(A[i]=="-"){
                ans=b-a;
            }
            else if(A[i]=="*"){
                ans=a*b;
            }
            else{
                ans=b/a;
            }
            s.push(ans);
        }
        else{
            s.push(stoi(A[i]));
            //else simply push into the stack.
        }
    }
    return s.top();
    //final value is the top value present at last.
}
