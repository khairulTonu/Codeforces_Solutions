#include<bits/stdc++.h>
using namespace std;
set<int>s;
int main()
{
    int n,i,m,j,k,l,v,cnt=0,x;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        int f=1;
        cin>>v;
        for(j=0;j<v;j++)
        {
            cin>>x;
            if(s.count(-x))
                f=0;
            s.insert(x);
        }
        if(f)
            cnt++;
        s.clear();
    }
    if(cnt==0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
}
