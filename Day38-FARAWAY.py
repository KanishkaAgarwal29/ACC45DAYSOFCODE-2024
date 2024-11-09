# cook your dish here
t=int(input())
for i in range(t):
    m,n=map(int,input().split())
    a=list(map(int,input().split()))
    s=0
    for j in range(m):
        if(a[j]<=n//2):
            s=n-a[j]+s
        else:
            s=a[j]-1+s
    print(s)