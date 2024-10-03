#include <stdio.h>

int main() {
	
int T,X,Y,a,s;
scanf("%d",&T);
for(int i=0;i<T;i++)
{
    scanf("%d%d",&X,&Y);
    s=(500-(X*2))+(1000-((X+Y)*4));
    a=(1000-(Y*4))+(500-((X+Y)*2));
    if(s>a)
    printf("%d\n",s);
    else
    printf("%d\n",a);
}
return 0;
}

