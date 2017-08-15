#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,m,cntl=0,cntu=0;
    set<int>s;
    int a[100005];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    if(s.size()<=2)
    {
        cout<<"0";
        return 0;
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(a[0]==a[i])
        {
            cntl++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[n-1]==a[i])
        {
            cntu++;
        }
    }
    m=n-(cntl+cntu);

    cout<<m;
}
