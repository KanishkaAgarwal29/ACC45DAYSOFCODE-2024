# cook your dish here
t=int(input())
for i in range(t):
    a,b,c=map(int,input().split())
    if(b+(2*c)>=a):
        print('Qualify')
    else:
        print('NotQualify')