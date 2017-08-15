#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,k,l,x=0,y=0,p=0,q=0;
    char a[100001];
    cin>>n>>a;
    for(i=0; i<n; i++)
    {
        if(i%2==0&&a[i]!='r')
        {
            x++;
        }
        else if(i%2==1&&a[i]!='b')
        {
            y++;
        }
    }
    k=max(x,y);
    for(i=0; i<n; i++)
    {
        if(i%2==0&&a[i]!='b')
        {
            p++;
        }
        else if(i%2==1&&a[i]!='r')
        {
            q++;
        }
    }
    l=max(p,q);
    j=min(k,l);
    cout<<j;
}
