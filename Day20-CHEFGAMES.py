t=int(input())
for i in range(t):
    n=input()
    n=n.split()
    for j in range(4):
        n[j]=int(n[j])
    if(n[0]==n[1]==n[2]==n[3]==0):
        print("IN")
    else:
        print('OUT')