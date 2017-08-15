#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100001];
    int n,m,i,j,k,l,x=0,y,z=999999999,sum=0,p,q=0,r;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0; i<n; i++)
    {
        if(a[i]>m)
        {
            y=a[i]-m;
        }
        else
        {
            y=m-a[i];
        }
        x=max(x,y);
        z=min(z,y);
    }
    for(i=0; i<n; i++)
    {
        if(x+m==a[i]||m-x==a[i])
        {
            j=i;
        }
    }

    for(i=j; i<n; i++)
    {
        a[i]=a[i+1];
    }
    for(i=0; i<n-1; i++)
    {
        //cout<<a[i]<<" ";
        if(z+m==a[i]||m-z==a[i])
        {
            k=i;
        }
    }
    sum=z;
    for(i=k; i<n-1; i++)
    {
        //cout<<a[i]<<" ";
        if(i==n-2)
        {
            break;

        }
        p=a[i+1]-a[i];
        sum=sum+p;


    }
    for(i=0;i<k;i++)
    {
        if(i==k)
        {
            break;
        }
        /*if(q==0)
        {
            p=a[n-2]-a[0];
            sum=sum+p;
            q++;
        }*/
        p=a[i+1]-a[i];
        sum=sum+p;

    }
    cout<<sum;


}
