# cook your dish here
t=int(input())
for _ in range (t):
    n,a,b=map(int,input().split())
    if(n%2==0):
        s=(n//2)*(a+b)
    else:
        s=((n//2)*(a+b))+b 
    print(s)