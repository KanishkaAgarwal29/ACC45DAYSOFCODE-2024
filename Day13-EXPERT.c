#include <stdio.h>

int main() 
{
	int t,x,y;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d%d",&x,&y);
	    if((y*100)/x>=50)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

