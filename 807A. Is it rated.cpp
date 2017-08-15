#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[50001],b[50001],i,j,k,l,n,cnt=0,cnt1=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]!=b[i])
        {
            cnt++;
        }
    }
    if(cnt==0)
    {
        for(i=0; i<n-1; i++)
        {
            if(a[i]<a[i+1])
            {
                cout<<"unrated";
                return 0;
            }
        }
        cout<<"maybe";
    }
    else
    {
        cout<<"rated";
    }


}
