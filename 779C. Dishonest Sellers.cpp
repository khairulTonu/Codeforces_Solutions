#include<bits/stdc++.h>
using namespace std;
int a[1000001],b[1000001];
int main()
{
    int i,j,k,l,m,n,sum=0,p=0;
    vector<pair<int,int> >v,v1;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<n;i++)
    {
        v.push_back(make_pair(b[i],a[i]));
        v1.push_back(make_pair(a[i],b[i]));
    }
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    for(i=0;i<n;i++)
    {
        if(k>0&&v1[i].first<v1[i].second)
        {
            k--;
            sum+=v1[i].first;
            v1[i].first=0;
        }
    }
    for(i=0;i<n;i++)
    {
        if(k>0&&v1[i].first==v1[i].second)
        {
            k--;
            sum+=v1[i].first;
            v1[i].first=0;
        }
    }
    if(k>0)
    {
        for(i=n-1;i>=0;i--)
        {
            if(k==0)
                break;
            sum+=v[i].second;
            v[i].second=0;
            k--;
        }
    }
    for(i=0;i<n;i++)
    {
        if(v1[i].first!=0&&v[i].second!=0)
        {
            if(v1[i].first<=v1[i].second)
                sum+=v1[i].first;
            else
            {
                sum+=v1[i].second;
            }
        }
    }
    cout<<sum;
}
