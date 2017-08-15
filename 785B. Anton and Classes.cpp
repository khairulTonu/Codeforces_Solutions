#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int> >v;
    vector<pair<int,int> >v1;

    int n,i,j,k,l,m,x,y,ans=0,mini1=9999999999,max1=0,mini2=9999999999,max2=0,ans1,ans2;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    cin>>m;
    for(i=1;i<=m;i++)
    {
        cin>>x>>y;
        v1.push_back(make_pair(x,y));
    }
    for(vector<pair<int,int> >::iterator it=v.begin();it!=v.end();it++)
    {
        mini1=min(it->second,mini1);
        max1=max(it->first,max1);
    }
    for(vector<pair<int,int> >::iterator it1=v1.begin();it1!=v1.end();it1++)
    {
        mini2=min(it1->second,mini2);
        max2=max(it1->first,max2);
    }
    ans1=max2-mini1;
    ans2=max1-mini2;
    ans=max(ans2,ans1);
    if(ans<0)
        cout<<"0";
    else
        cout<<ans;

}
