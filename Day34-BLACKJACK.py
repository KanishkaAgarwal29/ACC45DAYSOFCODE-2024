t=int(input())
for _ in range(t):
    a,b=map(int,input().split())
    c=a+b
    if(21-c<11 and 21-c>0):
        print(21-c)
    else:
        print('-1')