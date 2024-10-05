#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T,a[4],s,x;
    cin>>T;
    for(int j=0;j<T;j++)
    {s=0;
    x=0;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
        if(a[s]<a[i])
        {
            s=i;
        }
    }
    for(int i=0;i<4;i++)
    {
        if(i!=s)
        {
            x=x+a[i];
        }
    }
    if(x<a[s])
    {cout<<"YES\n";}
    else
    cout<<"NO\n";}
    return 0;
}
