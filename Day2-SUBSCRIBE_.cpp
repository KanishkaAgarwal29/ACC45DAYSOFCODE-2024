#include <bits/stdc++.h>
using namespace std;

int main() {
	int X,T,N,c;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>N;
	    cin>>X;
	    c=N/6;
	    if((N%6)>0)
	    c++;
	    cout<<X*c<<"\n";
	}
return 0;
}
