import math as mt
t=int(input())
for i in range(t):
    n=input()
    n=n.split(" ")
    for j in range(3):
        n[j]=int(n[j])
    a=mt.log2(n[0])
    a=int(a)
    b=(a*n[1])+((a-1)*n[2])
    print(b)
    
