t=int(input())
for i in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    if(sum(a)%2==0):
        print(abs(sum(a))//2)
    else:
        print('-1')
