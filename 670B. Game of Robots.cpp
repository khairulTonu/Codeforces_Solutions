#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[500001];
    int i,j,k,l,m,n,x=0;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        if(k-i>0)
        {
            k=k-i;
        }
    }
    cout<<a[k];
}
