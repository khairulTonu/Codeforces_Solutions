#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,a[2000];
    cin>>n;
    set<int>s;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    if(s.size()==n)
    {
        cout<<n-1;
    }
    else if(s.size()==1)
    {
        cout<<"0";
    }
    else
    {
        cout<<s.size();
    }

}
