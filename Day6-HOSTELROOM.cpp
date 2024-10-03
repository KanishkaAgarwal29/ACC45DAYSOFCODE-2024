#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,x,s,a;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n>>x;
	    s=x;
	    a=x;
	    int A[n];
	    for(int j=0;j<n;j++)
	    {
	        cin>>A[j];
	        s=s+A[j];
	        if(s>=a)
	        {a=s;}
	    }
	    cout<<a<<"\n";
	}
return 0;
}
