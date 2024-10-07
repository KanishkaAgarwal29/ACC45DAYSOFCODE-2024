#include <stdio.h>

int main() {
	int t,w,x,y,z;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d%d%d%d",&w,&x,&y,&z);
	    if(x==w||y==w||z==w||x+y==w||y+z==w||x+z==w||x+y+z==w)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

