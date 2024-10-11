#include <stdio.h>

int main() {
    int t,x,y,c,s,a,b;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{   c=0;
    	s=0;
	    scanf("%d%d",&x,&y);
	    if(x>y)
	   { b=x;
	     a=y;
	   }
	  else
	  {
	      a=x;
	      b=y;
	  }
	    while(b<2*a)
	    {
	        a--;
	        c++;
	    }
	    
	    printf("%d\n",c);
	}
return 0;
}

