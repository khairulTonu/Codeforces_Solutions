#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],n,i,j,k,x,y,z,p=0,q=0,r=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            p++;
        }
        else if(a[i]==2)
        {
            q++;
        }
        else
        {
            r++;
        }
    }
    p=min(p,q);
    x=min(p,r);
    if(x==0)
    {
        cout<<x;
        return 0;
    }
    else
    {
        cout<<x<<endl;
        for(j=1;j<=x;j++)
        {
            for(k=1;k<=n;k++)
            {
                if(a[k]==1)
                {
                    cout<<k<<" ";
                    a[k]=0;
                    break;
                }
            }
            for(k=1;k<=n;k++)
            {
                if(a[k]==2)
                {
                    cout<<k<<" ";
                    a[k]=0;
                    break;
                }
            }
            for(k=1;k<=n;k++)
            {
                if(a[k]==3)
                {
                    cout<<k<<" ";
                    a[k]=0;
                    break;
                }
            }
            cout<<endl;
        }
    }



}
