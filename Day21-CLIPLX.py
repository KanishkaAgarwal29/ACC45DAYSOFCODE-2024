t=int(input())
for i in range(t):
    n=input()
    n=n.split()
    n[0]=int(n[0])
    n[1]=int(n[1])
    if(n[0]<n[1]):
        print('0')
    else:
        print(n[0]-n[1])
        
