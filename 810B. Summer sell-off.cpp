#include<bits/stdc++.h>
using namespace std;
int k[1000005],l[1000005];
//bool z[100000005];
int main()
{
    long long int n,f,i,j=1,total=0,x,y;
    scanf("%I64d%I64d",&n,&f);
    vector<pair<int,int> > v;
    //memset(z,false,sizeof(z));
    for(i=0;i<n;i++)
    {
        cin>>k[i]>>l[i];
        v.push_back(make_pair(l[i],k[i]));
    }
    sort(v.begin(),v.end());
    for(i=n-1;i>=0;i--)
    {
        //cout<<v[i].first<<" "<<v[i].second<<endl;
        if(v[i].second>0&&f>0)
        {
            v[i].second=v[i].second*2;
            f--;
        }


    }
    for(i=0;i<n;i++)
    {
        //cout<<v[i].first<<" "<<v[i].second<<endl;
        if(v[i].second>=v[i].first)
        {
            total+=v[i].first;
        }
        else
        {
            total+=v[i].second;
        }


    }
    printf("%I64d",total);

}
