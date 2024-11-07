# cook your dish here
t=int(input())
for i in range(t):
    n=int(input())
    if(n<2):
        print('0')
    else:
        w=0
        n=n-1
        c=0
        while(w<n):
            w=w+7
            c+=1
        print(c)