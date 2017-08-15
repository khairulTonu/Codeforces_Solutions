#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,f=0;
    set<long long int>s;
    long long int a[501][501];
    long long int x,y,z,sum=0,sum1=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>a[i][j];
            if(a[i][j]==0)
            {
                k=i;
                l=j;
            }
        }
    }
    if(n==1&&a[0][0]==0)
    {
        cout<<"1";
        return 0;
    }
    else if(n==1)
    {
        cout<<"0";
        return 0;
    }
    for(i=0; i<n; i++)
    {
        sum=0;
        f=0;
        for(j=0; j<n; j++)
        {
            if(i==k)
            {
                break;
            }
            else
            {
                sum=sum+a[i][j];
                f=1;
            }
        }
        if(f==1)
        {
            s.insert(sum);
        }
    }
    /* set<long long int>::iterator p=s.begin();
     while(p!=s.end())
     {
         cout<<*p<<" ";
         p++;
     }*/
    if(s.size()==1)
    {
        set<long long int>::iterator p=s.begin();
        for(j=0; j<n; j++)
        {
            sum1=sum1+a[k][j];
        }
        if(*p==sum1)
        {
            cout<<"-1";
            return 0;
        }
        //printf("%I64d",*p-sum1);
        x=*p-sum1;
        if(x<0)
        {
            cout<<"-1";
            return 0;
        }
        a[k][l]=x;
        set<long long int>y;
        for(i=0; i<n; i++)
        {
            sum=0;
            for(j=0; j<n; j++)
            {
                sum=sum+a[i][j];
            }
            y.insert(sum);
        }
        for(j=0; j<n; j++)
        {
            sum=0;
            for(i=0; i<n; i++)
            {
                sum=sum+a[i][j];
            }
            y.insert(sum);
        }
        sum=0;
        for(i=0; i<n; i++)
        {
            sum=sum+a[i][i];

        }
        y.insert(sum);
        sum=0;
        for(i=n-1; i>=0; i--)
        {
            sum=sum+a[i][n-(i+1)];

        }
        y.insert(sum);
        /*set<long long int>::iterator q=y.begin();
        while(q!=y.end())
        {
            cout<<*q<<" ";
            q++;
        }*/

        if(y.size()==1)
        {
            printf("%I64d",x);
            return 0;
        }
        else
        {
            cout<<"-1";
            return 0;
        }

    }
    else
    {
        cout<<"-1";
    }



}
