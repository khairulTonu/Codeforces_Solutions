#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>>v;
    int i,j,k,l,n,x,y,best=-1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    best=v[0].second;
    for(i=1;i<n;i++)
    {
        if(v[i].second<best)
        {
            best=v[i].first;
        }
        else
        {
            best=v[i].second;
        }
    }
    cout<<best;

}
