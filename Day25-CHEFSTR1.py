# cook your dish here
# cook your dish here
t=int(input())
for i in range(t):
    a=int(input())
    n=input()
    n=n.split()
    n[0]=int(n[0])
    s=0
    for j in range(1,a):
        n[j]=int(n[j])
        s=s+abs(n[j]-n[j-1])-1
    print(s)