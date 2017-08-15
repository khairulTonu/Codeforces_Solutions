#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x,y,cnt1=0,cnt2=0;
    cin>>n;
    int a[n+1],b[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]>b[i])
        {
            cnt1++;
        }
        else if(b[i]>a[i])
        {
            cnt2++;
        }
    }
    if(cnt1>cnt2)
    {
        cout<<"Mishka";
    }
    else if(cnt2>cnt1)
    {
        cout<<"Chris";
    }
    else
    {
        cout<<"Friendship is magic!^^";
    }

}

