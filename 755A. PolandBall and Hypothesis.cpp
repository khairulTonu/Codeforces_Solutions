#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l;
    cin>>n;
    if(n==1)
    {
        cout<<"3";
    }
    else if(n%2!=0)
    {
        cout<<"1";
    }
    else if(n==2)
    {
        cout<<"4";
    }
    else if(n==1000)
    {
        cout<<"2";
    }
    else
    {
        cout<<n-2;
    }
}
