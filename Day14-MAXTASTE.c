#include <stdio.h>
int max(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}

int main() {
int t,a,b,c,d,s;
scanf("%d",&t);
for(int i=0;i<t;i++)
{
    scanf("%d%d%d%d",&a,&b,&c,&d);
    s=max(a,b)+max(c,d);
    printf("%d\n",s);
}
return 0;
}

