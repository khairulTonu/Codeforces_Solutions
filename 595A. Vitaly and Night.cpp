#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k,l,cnt=0,a[100005];
    cin>>n>>m;
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=2*m; i++)
        {
            cin>>a[i];
        }
        for(i=1; i<=2*m; i++)
        {
            if(i%2==0)
            {
                if(a[i]==1||a[i-1]==1)
                {
                    cnt++;
                }
            }
        }
    }
    cout<<cnt;

}
