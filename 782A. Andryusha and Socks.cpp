#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[200005];
    int i,j,k=0,l,n,x,ans=0;
    cin>>n;
    for(i=1;i<=2*n;i++)
    {
        cin>>x;
        if(a[x]==0)
            k++;
        else
            k--;
        ans=max(k,ans);
        a[x]=1;
    }
    cout<<ans;
}
