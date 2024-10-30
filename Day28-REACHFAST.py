t=int(input())
for i in range(t):
    a,b,k=map(int,input().split())
    c=abs(b-a)//k 
    if((b-a)%k!=0):
        c+=1
    print(c)
        