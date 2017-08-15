#include<bits/stdc++.h>
using namespace std;
int sum[1000005];
int main()
{
    int i,j,k,l,m,n,x;
    cin>>n;
    int tmp1=1;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        //tmp+=a[i];
        for(j=tmp1;j<tmp1+x;j++)
        {
            sum[j]=i;
        }
        tmp1=tmp1+x;
        //sum[i]=tmp;
    }
    cin>>m;
    for(i=1;i<=m;i++)
    {
        cin>>x;
        cout<<sum[x]<<endl;
    }




}
