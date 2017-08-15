#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int x,y,z,i,j,k;
    cin>>x>>y>>z;
    v.push_back(x);
    v.push_back(y);
    v.push_back(z);
    sort(v.begin(),v.end());
    i=v[1]-v[0];
    j=v[2]-v[1];
    k=i+j;
    cout<<k;
}
