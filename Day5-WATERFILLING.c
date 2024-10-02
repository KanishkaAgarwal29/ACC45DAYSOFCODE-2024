#include <stdio.h>

int main() {
	int T,B[3],c;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{c=0;
	    for(int j=0;j<3;j++)
	    {
	      scanf("%d",&B[j]);
	      if(B[j]==0)
	      {c++;}
	    }
	    if(c>=2)
	    {
	        printf("Water filling time\n");
	    }
	    else
	    {
	        printf("Not now\n");
	    }
	}
return 0;
}

