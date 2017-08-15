#include<bits/stdc++.h>
using namespace std;
//int a[300005];
//int b[300005];
int main()
{


    long long int n,i,j,k,l,m,mini=9999999999,x=9999999999,cnt=0;
    cin>>n;
    int a[n+1], b[200005];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    /*for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }*/
    for(i=0;i<n-1;i++)
    {
        m=a[i+1]-a[i];
        x=min(m,x);
        //x=abs(x);
        if(x<mini)
        {
            mini=x;
            //mini=abs(mini);
            cnt=0;
        }
        if(mini==m)
        {
           cnt++;
        }

    }
    /*for(i=0; i<n-1; i++)
    {
        m=a[i+1]-a[i];
        b[m]++;
    }
    m=1;
    while(1)
    {
        if(b[m])
        {
            cout<<m<<" "<<b[m];
            return 0;
        }
        m++;
    }*/
    cout<<mini<<" "<<cnt;
}
