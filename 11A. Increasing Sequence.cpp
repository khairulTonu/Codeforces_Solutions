#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3000],i,j,k,l,n,d,cnt=0,cnt1=0,flag;
    cin>>n>>d;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>=a[j])
            {
                swap(a[i],a[j]);
                cnt++;

            }
        }
    }
    cout<<cnt;
}
