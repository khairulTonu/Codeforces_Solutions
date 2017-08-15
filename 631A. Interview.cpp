#include<bits/stdc++.h>
#include <cstdio>
using namespace std;
int main()
{
    int n,x=0,y=0,i;
    cin>>n;
    int a[n+1];
    int b[n+1];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<n;i++)
    {
        x|=a[i];
        y|=b[i];
    }
    cout<<x+y;


    return 0;
}
