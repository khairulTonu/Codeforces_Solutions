#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,m;
    int a[200002],b[200002];
    long long cnt=0;

    memset(b,0,sizeof(b));

    cin>>n>>x;


    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        cnt += b[a[i]];
        m= a[i]^x;
        b[m] += 1;
    }

    cout<<cnt;
    return 0;
}
