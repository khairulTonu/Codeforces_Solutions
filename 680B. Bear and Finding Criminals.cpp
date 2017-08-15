#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[101];
    int n,i,j,k,l,c,x,y,z,cnt=0;
    deque<int>b,f;
    cin>>n>>c;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    x=n-c;
    y=c-1;
    z=max(x,y);
    if(a[c]==1)
    {
        cnt++;
    }
    for(i=1; i<c; i++)
    {
        if(i==c)
        {
            break;
        }
        b.push_front(a[i]);
    }
    for(i=n; i>c; i--)
    {
        if(i==c)
        {
            break;
        }
        f.push_front(a[i]);
    }
    deque<int>::iterator it=b.begin();
    deque<int>::iterator it1=f.begin();
    /*while(it!=b.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    while(it1!=f.end())
    {
        cout<<*it1<<" ";
        it1++;
    }*/

    while(it!=b.end()&&it1!=f.end())
    {
        if(*it==1 && *it1==1)
        {
            cnt=cnt+2;
        }
        it++;
        it1++;
    }
    while(it!=b.end())
    {
        if(*it==1)
        {
            cnt++;
        }
        it++;
    }
    while(it1!=f.end())
    {
        if(*it1==1)
        {
            cnt++;
        }
        it1++;
    }
    cout<<cnt;
    /*for(j=1; j<=n; j++)
    {
        if(c+j<=n&&c-j>=1)
        {
            if(a[c+j]==1&&a[c-j]==1)
            {
                cnt=cnt+2;
            }
        }
        else if(c+j<=n)
        {
            if(a[c+j]==1)
            {
                cnt=cnt++;
            }
        }
        else if(c-j>=1&&c+j>n)
        {
            if(a[c-j]==1)
            {
                cnt=cnt++;
            }
        }


    }
    cout<<cnt;*/
}
