#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,a[300001],i,j,k,l,cnt=0,cnt1=0,cnt2=0,x,y=999999999;
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(s[i]=='R')
        {
            j=i;
            break;
        }
    }
    for(i=j+1;i<n;i++)
    {
        if(s[i]=='L')
        {
            cnt++;
        }
    }
    if(cnt==0)
    {
        cout<<"-1";
        return 0;
    }

    for(i=0;i<n;i++)
    {
        if(s[i]=='R')
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
    }
    if(cnt1==0||cnt2==0)
    {
        cout<<"-1";
        return 0;
    }

    for(i=0;i<n;i++)
    {
        if(s[i]=='R'&&s[i+1]=='L')
        {
            x=(a[i+1]-a[i])/2;
            y=min(y,x);
        }
    }
    cout<<y;



}
