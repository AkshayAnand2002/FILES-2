'''
AT A FUN FAIR A STREET VENDOR IS SELLING BALLONS OF DIFFERENT COLORS.
HE SELLS N NO. OF DIFFERNT COLORS OF BALLONS.
FIND COLOUR OF BALLONS PRESENT ODD NO. OF TIMES.
INPUT:
7
r,g,b,b,g,y,y
OUTPUT:
r
'''
n=int(input())
B=list()
for i in range(n):
    B.append(input().lower())
for i in B:
    if(B.count(i)%2 != 0):
        print("\n",i)
        break
else:
    print("ALL EVEN.")
    
