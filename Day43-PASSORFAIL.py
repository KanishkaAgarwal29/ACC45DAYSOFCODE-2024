# cook your dish here
t=int(input())
for _ in range (t):
    n,x,p=map(int,input().split())
    a=(x*3)-(n-x)
    if(a>=p):
        print("PASS")
    else:
        print("FAIL")