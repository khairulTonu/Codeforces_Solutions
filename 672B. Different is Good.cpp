#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<char>s;
    char a[100001];
    int l,i,j,n;
    cin>>n;
    cin>>a;
    if(n>26)
    {
        cout<<"-1";
        return 0;
    }
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        s.insert(a[i]);
    }
    cout<<l-s.size();
}
