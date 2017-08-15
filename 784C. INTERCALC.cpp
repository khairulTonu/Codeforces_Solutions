#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,a[100],mx=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    k=a[n-1];
    j=mx^k;
    cout<<j;
}
