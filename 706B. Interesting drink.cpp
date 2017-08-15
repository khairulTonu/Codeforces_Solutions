#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,q,cnt;
    vector<int>v,w;
    cin>>n;
    int a[100001];
    int b[100001];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    sort(v.begin(),v.end());
    vector<int>::iterator up;
    cin>>q;
    for(i=0;i<q;i++)
    {
        //cnt=0;
        cin>>b[i];
        up=upper_bound(v.begin(),v.end(),b[i]);
        cnt=(up-v.begin());
        w.push_back(cnt);
    }
    vector<int>::iterator it=w.begin();
    while(it!=w.end())
    {
        cout<<*it<<endl;
        it++;
    }
}
