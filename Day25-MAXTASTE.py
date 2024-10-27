# cook your dish here
t=int(input())
for i in range(t):
    n=input()
    n=n.split()
    for j in range(4):
        n[j]=int(n[j])
    print(max(n[0],n[1])+max(n[2],n[3]))