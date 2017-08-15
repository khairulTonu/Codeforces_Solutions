#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100001],i,j,k,l,x,y,z,n,c,cnt=1;
    cin>>n>>c;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=n-1;i>=1;i--)
    {
        if(a[i]-a[i-1]>c)
        {
            break;
        }
        else
        {
            cnt++;
        }
    }
    cout<<cnt;
}
