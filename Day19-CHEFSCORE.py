t=int(input())
for i in range(t):
    n=input()
    n=n.split()
    for j in range(3):
        n[j]=int(n[j])
    if(n[2]%n[1]==0):
        print('YES')
    else:
        print('NO')
