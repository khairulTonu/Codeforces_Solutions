#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100005],b[100005],c[100005],i,j,k,l,n,sum=0,sum1=0,sum2=0;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    for(i=0; i<n-1; i++)
    {
        cin>>b[i];
        sum1+=b[i];
    }
    for(i=0; i<n-2; i++)
    {
        cin>>c[i];
        sum2+=c[i];
    }
    cout<<sum-sum1<<endl<<sum1-sum2;




}
