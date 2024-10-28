# cook your dish here
t=int(input())
for i in range(t):
    n=input()
    n=n.split()
    n[0]=int(n[0])
    n[1]=int(n[1])
    a=input()
    a=a.split()
    c=0
    for j in range(n[0]):
        a[j]=int(a[j])
        if((a[j]+n[1])%7==0):
            c+=1
    print(c)
    