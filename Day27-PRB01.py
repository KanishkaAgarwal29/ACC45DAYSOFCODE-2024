# cook your dish here
t=int(input())
for i in range(t):
    n=int(input())
    j=0
    for j in range(2,n+1):
        if(n%j==0):
            break
    if(j==n):
        print('Yes')
    else:
        print('No')
        