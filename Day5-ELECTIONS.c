#include <stdio.h>

int main() {
	int T,X[3],k;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
	    for(int j=0;j<3;j++)
	    {
	        scanf("%d",&X[j]);
	    }
	    if(X[0]<=50 && X[1]<=50 && X[2]<=50)
	    {
	        printf("NOTA\n");
	    }
	    else
	    {   
	        if(X[0]>50)
	        printf("A\n");
	        else if(X[1]>50)
	        printf("B\n");
	        else if(X[2]>50)
	        printf("C\n");
	    }
	}
return 0;
}

