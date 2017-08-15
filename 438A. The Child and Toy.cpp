#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100005],sum=0,xi,yi;
    int i,j,k,l,m,n;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=m;i++)
    {
        cin>>xi>>yi;
        if(a[xi]<=a[yi])
        {
            sum+=a[xi];
        }
        else
        {
            sum+=a[yi];
        }
    }
    cout<<sum;
}
