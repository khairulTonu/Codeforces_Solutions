#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,a[200001],mx,mn;

    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        //cout<<abs(a[0]-a[1])<<endl;
        if(i==0)
        {
            mx=abs(a[n-1]-a[0]);
            mn=abs(a[1]-a[0]);
            cout<<mn<<" "<<mx<<endl;
        }
        else if(i==n-1)
        {
            mx=abs(a[n-1]-a[0]);
            mn=abs(a[n-1]-a[i-1]);
            cout<<mn<<" "<<mx<<endl;
        }
        else
        {
            mx=max(abs(a[i]-a[0]),abs(a[i]-a[n-1]));
            mn=min(abs(a[i]-a[i+1]),abs(a[i]-a[i-1]));
            cout<<mn<<" "<<mx<<endl;
        }
        //cout<<mn<<" "<<mx<<endl;
    }
}
