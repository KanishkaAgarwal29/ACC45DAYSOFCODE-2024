t=int(input())
for i in range(t):
    n=int(input())
    l=input()
    l=l.split()
    for j in range(n):
        l[j]=int(l[j])
    l.sort()
    c=0
    s=0
    while(s<n):
        m=l[s]
        if(s + m - 1 >= n or l[s]!=l[s+m-1]):
          c=1
          break
        s=s+m
    if(c==0):
        print("YES")
    else:
        print('NO')