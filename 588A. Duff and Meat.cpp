#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[200001],i,n,j,k,price=9999999999,res=0,p[200001];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>p[i];
    }
    for(i=0;i<n;i++)
    {
        price=min(price,p[i]);
        res+=price*a[i];
    }
    cout<<res;


}
