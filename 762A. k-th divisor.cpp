#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,k,l,cnt=0;
    vector<long long int>v;
    cin>>n>>k;
    for(i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if(i*i!=n)
            {
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    if(v.size()<k)
    {
        cout<<"-1";
    }
    else
    {
        cout<<v[k-1];
    }
}

