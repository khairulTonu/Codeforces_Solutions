#include<bits/stdc++.h>
using namespace std;
int n,i,j,k,q,l[1000000],r[1000000],a[1000000],b[1000000];
int main()
{
    int x,y;
    cin>>n>>k>>q;
    for(i=0;i<2*n;i++)
    {
        cin>>l[i];
    }
    for(i=0;i<q;i++)
    {
        int cnt=0;
        cin>>x>>y;
        for(j=x;j<=y;j++)
        {
            if(j>=l[i]&&j<=r[i])
            {
                cnt++;
            }
        }
    }
}
