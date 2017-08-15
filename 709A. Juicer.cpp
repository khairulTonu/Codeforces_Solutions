#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100001],i,j,k,l,sum=0,n,b,d,cnt=0;
    cin>>n>>b>>d;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=b)
        {
            sum=sum+a[i];
            if(sum>d)
            {
                sum=0;
                cnt++;
            }
        }
    }
    cout<<cnt;
}
