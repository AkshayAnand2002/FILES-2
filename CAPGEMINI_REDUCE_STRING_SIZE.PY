'''
Problem Statement –

Capgemini in its online written test have a coding question, wherein the students are given a string with multiple characters that are repeated consecutively. You’re supposed to reduce the size of this string using mathematical logic given as in the example below :

Input :

aabbbbeeeeffggg

Output:

a2b4e4f2g3

Input :

abbccccc

Output:

ab2c5
'''
def solve(s):
    ans=""
    c=1
    for i in range(len(s)-1):
        if(s[i]==s[i+1]):
            c+=1
        else:
            if(c==1):
                ans+=s[i]
            else:
                ans+=s[i]+str(c) #count also
            c=1 #made for next letter
    if(c==1):
        ans+=s[i+1] #for last letter
    else:
        ans+=s[i+1]+str(c) #for last letter
    return ans
s=input()
print(solve(s))
