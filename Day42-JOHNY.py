# cook your dish here
t=int(input())
for _ in range (t):
    n=int(input())
    a=list(map(int,input().split()))
    k=int(input())
    b=a[k-1]
    a.sort()
    for i in range(n):
        if(a[i]==b):
            b=i+1 
            break
    print(b) 