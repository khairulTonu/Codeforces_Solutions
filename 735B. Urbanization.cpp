#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,n,p,q,r;
    double m,n1,n2,a[100001],sum1=0.0,sum2=0.0,sum3=0.0,sum4=0.0,x,y,ans;
    cin>>n>>n1>>n2;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    m=n1+n2;
    sort(a,a+n);
    j=n-1;
    r=n-1;
    i=min(n1,n2);
    k=max(n1,n2);
    p=i;
    q=k;
    x=i;
    y=k;
    while(i)
    {
        sum1=sum1+a[j];
        j--;
        i--;
    }
    sum1=sum1/x;
    while(k)
    {
        sum2=sum2+a[j];
        j--;
        k--;
    }
    sum2=sum2/y;

    while(q)
    {
        sum3=sum3+a[r];
        r--;
        q--;
    }
    sum3=sum3/y;
    while(p)
    {
        sum4=sum4+a[r];
        r--;
        p--;
    }
    sum4=sum4/x;

    ans=max(sum1+sum2,sum3+sum4);

    printf("%.8f",ans);




}
