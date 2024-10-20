t=int(input())
for i in range(t):
    n=int(input())
    a=input()
    b=0
    c=0
    for j in range(n):
        if(a[j]=='0'):
            b+=1
        elif(a[j]=='1'):
            c+=1
    for j in range(n):
        if(j<b):
            print('0',end="")
        else:
            print('1',end="")
    print("")
            