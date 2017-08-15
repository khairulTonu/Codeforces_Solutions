#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>>ans;
    int n,i,j,k,l,a[200001];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        k=i;
        for(j=i;j<n;j++)
        {
            if(a[k]>a[j])
            {
                k=j;
            }
        }
        if(i!=k)
        {
            ans.push_back(make_pair(i,k));
            swap(a[i],a[k]);
        }
    }
    cout<<ans.size()<<endl;
    for(i=0;i<ans.size();i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }


}
