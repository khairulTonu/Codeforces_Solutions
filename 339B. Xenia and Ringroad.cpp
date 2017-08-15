#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100005];
    long long int n,m,i,j,k,l,t=0,cur_pos;

    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>a[i];
    }
    cur_pos=1;
    for(i=1;i<=m;i++)
    {
        if(cur_pos<=a[i])
        {
            t+=(a[i]-cur_pos);
        }
        else
        {
            t+=(n-(cur_pos-a[i]));
        }
        cur_pos=a[i];
    }
    cout<<t;
}
