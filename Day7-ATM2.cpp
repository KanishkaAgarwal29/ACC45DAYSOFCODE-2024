#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,N,X;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>N>>X;
	    int a[N];
	    for(int j=0;j<N;j++)
	    {
	        cin>>a[j];
	        if(a[j]<=X)
	        {
	         X=X-a[j];
	         cout<<"1";
	        }
	        else
	        {
	            cout<<"0";
	        }
	    }
	    cout<<"\n";
	}

}
