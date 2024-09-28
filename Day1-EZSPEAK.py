T=int(input())
for i in range(0,T):
    c=0
    N=int(input())
    S=input()
    for j in range(0,N):
        if(S[j]=='a'or S[j]=='e'or S[j]=='i'or S[j]=='o'or S[j]=='u'):
            c=0
        else:
            c=c+1
        if(c>=4):
            print("NO")
            break
    if(c<4):
        print("YES")