t=int(input())
for i in range (0,t):
    n=int(input())
    s=list(input())
    if(n%2==0):
        a=n
    else:
        a=n-1
    for j in range(0,a,2):
            x=s[j]
            s[j]=s[j+1]
            s[j+1]=x
    x='abcdefghijklmnopqrstuvwxyz'
    x=list(x)
    for j in range(0,n):
        b=0
        while(s[j]!=x[b]):
            b+=1
        s[j]=x[25-b]  
    print("".join(s))