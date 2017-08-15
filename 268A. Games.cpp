#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d,i,j,h[1000],a[1000],cnt=0;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>h[i]>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==h[j])
            {
                cnt++;
            }
        }
    }
    cout<<cnt;


}

