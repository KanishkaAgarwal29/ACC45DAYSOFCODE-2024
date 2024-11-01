# cook your dish here
t=int(input())
for i in range(t):
    n,m=map(int,input().split())
    a,b=map(int,input().split())
    if(n<=a and m<=b):
        print('Possible')
    else:
        print('Impossible')