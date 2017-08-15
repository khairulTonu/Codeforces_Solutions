#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,ans1=0,ans2=0,f1=0,f2=0;
    cin>>n>>m>>k;
    int a[n+2];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=m;i>=1;i--)
    {

        if(a[i]<=k&&a[i]!=0)
        {
            f1++;
            break;
        }
        ans1+=10;
    }
    for(i=m;i<=n;i++)
    {

        if(a[i]<=k&&a[i]!=0)
        {
            f2++;
            break;
        }
        ans2+=10;
    }
    if(f1==0)
    {
        cout<<ans2;
    }
    else if(f2==0)
    {
        cout<<ans1;
    }
    else
    {
        cout<<min(ans1,ans2);
    }

}
