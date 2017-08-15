#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    x=n%4;
    if(n==0)
    {
        cout<<"1";
        return 0;
    }
    if(x==0)
    {
        cout<<"6";
    }
    else if(x==1)
    {
        cout<<"8";
    }
    else if(x==2)
    {
        cout<<"4";
    }
    else if(x==3)
    {
        cout<<"2";
    }
}

