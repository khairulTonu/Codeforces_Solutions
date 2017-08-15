#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,y,i,j,res=0,m;

    float ans=0.0,z;
    cin>>n>>k;
    m=n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        ans+=x;
    }
    //cout<<ans/n;
    z=k-0.5;
    if(ans/n>=z)
    {
        cout<<res;
        return 0;
    }
    for(i=1;;i++)
    {
        res++;
        m++;
        if((ans+k)/m>=z)
        {
            //cout<<z;
            //cout<<m<<endl;
            //cout<<ans+k<<endl;
            //cout<<(ans+k)/m<<endl;
            cout<<res;
            return 0;
        }
        //cout<<ans+k<<" "<<m<<endl;
        //cout<<(ans+k)/m<<endl;
        ans+=k;

    }
}
