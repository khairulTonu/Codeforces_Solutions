#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,l;
    double ans,y,a[100001],x=0.0,z;
    cin>>n>>l;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    y=max(a[0]-0.0,l-a[n-1]);
    for(i=0;i<n-1;i++)
    {
        x=max(x,a[i+1]-a[i]);
        //cout<<x<<endl;
    }
    z=x/2;
    ans=max(y,z);
    printf("%.9f",ans);
}
