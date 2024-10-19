# cook your dish here
t=int(input())
for i in range(t):
    n=input()
    n=n.split(' ')
    n[0]=int(n[0])
    n[1]=int(n[1])
    j=1
    c=0
    while(1):
        if(j%2!=0):
            n[0]=n[0]-j
            if(n[0]<0):
                c=1
                print("BOB")
        else:
            n[1]=n[1]-j
            if(n[1]<0):
                c=1
                print("LIMAK")
        if(c==1):
            break
        j+=1