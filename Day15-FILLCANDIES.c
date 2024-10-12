#include <stdio.h>

int main() {
	int t,n,k,m,s;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d%d%d",&n,&k,&m);
	    if(n%m!=0)
	    {s=(n/m)+1;}
	    else
	    s=n/m;
	    if(s%k!=0)
	    s=(s/k)+1;
	    else
	    s=s/k;
	    printf("%d\n",s);
	}
return 0;
}

