#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,k,l,x,y,cnt1=0,cnt2=0,a[200002];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0; i<n; i++)
    {
        if(a[i]==a[0])
        {
            cnt1++;
        }
        else if(a[i]==a[n-1])
        {
            cnt2++;
        }
    }
    cout<<a[n-1]-a[0]<<endl;
    if(a[n-1]==a[0])
    {
        cout<<(n*(n-1))/2;
    }
    else
    {
        cout<<cnt1*cnt2;
    }
}
