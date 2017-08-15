#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100005],b[100005],p[100005],n,i,j,k,l,cnt=0,m;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        cin>>b[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            cnt++;
        }
    }
    if(cnt==1)
    {
        for(i=0; i<n; i++)
        {
            if(a[i]==b[i])
            {
                p[i]=a[i];
            }
            else
            {
                for(l=1; l<=n; l++)
                {
                    int f1=0;
                    if(a[i]!=l&&b[i]!=l)
                    {
                        for(m=0; m<n; m++)
                        {
                            if(p[m]!=l)
                            {
                                p[i]=l;
                                f1++;
                                break;
                            }
                        }

                    }
                    if(f1)
                        break;
                }
            }
        }

    }

    else
    {
        int f=0;
        for(i=0; i<n; i++)
        {
            if(a[i]!=b[i]&&f==0)
            {
                p[i]=b[i];
                f++;
            }
            else if(a[i]!=b[i]&&f==1)
            {
                p[i]=a[i];
            }
            else
            {
                p[i]=a[i];
            }
        }
    }

    for(i=0; i<n; i++)
    {
        cout<<p[i]<<" ";
    }

}
