t=int(input())
for i in range(t):
    n=int(input())
    a=input()
    a=a.split()
    c=0
    d=0
    for j in range(n):
        if(a[j]=='START38'):
            c+=1
        elif(a[j]=='LTIME108'):
            d+=1 
    print(c,d)
