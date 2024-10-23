t=int(input())
for i in range(t):
    n=input()
    n=n.split()
    c=0
    for j in range(3):
        n[j]=int(n[j])
    if n[0]>0:
        n[0]=n[0]-n[2]
        c=1
        while n[0]>0:
            n[0]=n[0]-n[1]
            c+=1
    print(c)