#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,k,l;
    int a[200005];
    long double x,area;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    for(i=0;i<n-2;i++)
    {
        x=a[i]+a[i+1]+a[i+2];
        x=x/2.0;
        area=x*(x-a[i])*(x-a[i+1])*(x-a[i+2]);
        //cout<<area<<endl;
        if(area>0)
        {
           //cout<<x<<endl;
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";

}
