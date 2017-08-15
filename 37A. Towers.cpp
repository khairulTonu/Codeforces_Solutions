#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,a[2000],mx=0,cnt=0;
    cin>>n;
    set<int>s;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    set<int>::iterator it=s.begin();
    while(it!=s.end())
    {
        cnt=0;
        for(i=0; i<n; i++)
        {
            if(a[i]==*it)
            {
                cnt++;
            }
        }
        mx=max(mx,cnt);
        it++;
    }
    cout<<mx<<" "<<s.size();

}
