#include <stdio.h>

int main() {
	// your code goes here
	int t,n,a;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d%d",&n,&a);
	    if(a<=n-a)
	    printf("%d\n",a);
	    else
	    printf("%d\n",n-a);
	}
return 0;
}

