#include <bits/stdc++.h>
using namespace std;
void sort(int n,int a[])
{int x;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            x=a[i];
            a[i]=a[i+1];
            a[i+1]=x;
            break;
        }
    }
}
int check(int n,int a[])
{
    int i;
     for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
           break;
        }
    }
    if(i==n-1)
    return 1;
    else
    return 0;
}

int main() {
	int T,N,s;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    s=0;
	    cin>>N;
	    int a[N];
	    for(int j=0;j<N;j++)
	    {cin>>a[j];}
	    if(check(N,a)==0)
	    {sort(N,a);}
	    if(check(N,a)==1)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	    
	}
return 0;
}
