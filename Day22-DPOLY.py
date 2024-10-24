t=int(input())
for i in range (t):
    n=int(input())
    a=input()
    a=a.split()
    j=0
    for j in range (0,n):
        a[j]=int(a[j])
    j=n-1
    while(a[j]==0):
        j-=1
    print(j)