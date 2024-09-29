#include <bits/stdc++.h>
using namespace std;
void Check(int a,int b)
{
    if(a>b)
	    {cout<<"DRAGON\n";}
	else if(b>a)
	    {cout<<"SLOTH\n";}
}

int main() {
	int T,s[3],d[3],a,b;
	cin>>T;
	for (int i=0;i<T;i++)
	{
	    a=0;
	    b=0;
	    for (int j=0;j<3;j++)
	    {
	        cin>>d[j];
	        a=a+d[j];
	    }
	     for (int k=0;k<3;k++)
	    {
	        cin>>s[k];
	        b=b+s[k];
	    }
	    
	    if(a!=b)
	    {Check(a,b);}
	    else
	    {
	        if(s[0]!=d[0])
	        {
	            Check(d[0],s[0]);
	        }
	        else if(s[1]!=d[1])
	        {
	            Check(d[1],s[1]);
	        }
	        else if(s[2]!=d[2])
	        {
	            Check(d[2],s[2]);
	        }
	        else
	        {cout<<"TIE\n";}
	    }
	}
return 0;
}
