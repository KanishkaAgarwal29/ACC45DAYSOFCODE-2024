t=int(input())
for i in range(t):
    n=input()
    n=n.split()
    n[0]=int(n[0])
    n[1]=int(n[1])
    a=n[0]*10
    b=n[1]*5
    if(a>b):
        print('First')
    elif(a<b):
        print('Second')
    else:
        print('Any')