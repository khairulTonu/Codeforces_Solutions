#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000];
    int i,j,k,l,n,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n-1;i++)
    {
        sum+=(a[n-1]-a[i]);
    }
    cout<<sum;
}
