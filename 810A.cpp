#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x,p,q,res;
    int n,ans,y,z,k,i,j;
    cin>>n>>k;
    x=k-0.5;
    for(i=1; i<=n; i++)
    {
        cin>>z;
        y=y+z;
    }
    cout<<y<<endl;
    p=y/n;
    cout<<p<<endl;
    if(y/n>=x)
    {
        cout<<ans;
        return 0;
    }
    for(j=1; j<=1000; j++)
    {
        res=(y+k)/n+j;
        ans++;
        if(res>=x)
        {
            cout<<res<<endl;
            cout<<ans;
            return 0;
        }
        y+=k;
        cout<<y<<endl;

    }
}

