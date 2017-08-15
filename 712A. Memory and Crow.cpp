#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(i==n-1)
        {
            cout<<a[n-1];
        }
        else
        {
            cout<<a[i]+a[i+1]<<" ";
        }
    }
}
