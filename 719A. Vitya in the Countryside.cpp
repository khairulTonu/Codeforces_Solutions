#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100];
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(a[n-1]==15)
    {
        cout<<"DOWN";
        return 0;
    }
    else if(a[n-1]==0)
    {
        cout<<"UP";
        return 0;
    }
    else if(n==1)
    {
        cout<<"-1";
        return 0;
    }
    else
    {
        if(a[n-1]>a[n-2])
        {
            cout<<"UP";
            return 0;
        }
        else
        {
            cout<<"DOWN";
            return 0;
        }
    }
}
