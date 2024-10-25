import collections as cl
t=int(input())
for i in range (t):
    n=int(input())
    a = list(map(int, input().split()))
    l=cl.Counter(a)
    m=max(l.values())
    print(n-m)