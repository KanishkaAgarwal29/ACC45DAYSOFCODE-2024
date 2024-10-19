# cook your dish here
t=int(input())
for i in range(t):
    n=input()
    n=n.split(' ')
    n[0]=int(n[0])
    n[1]=int(n[1])
    if(n[0]>n[1]):
        print("CAR")
    elif(n[0]<n[1]):
        print("BIKE")
    else:
        print("SAME")