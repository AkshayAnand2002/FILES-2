'''
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
'''
T=int(input())
E=input()
E=E.split()
E=[int(i) for i in E]
L=input()
L=L.split()
L=[int(i) for i in L]
r=0
guest=list()
for i in range(T):
    r=r+E[i]-L[i]
    guest.append(r)
print(max(guest))
