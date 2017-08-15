#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],i,j,n,k,l,x,sum=0;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    a[n]=k;
    for(i=0; i<n; i++)
    {
        if((a[i]+a[i+1])<k)
        {
            x=k-(a[i]+a[i+1]);
            a[i+1]+=x;
            sum+=x;
        }
    }
    cout<<sum<<endl;
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

}
