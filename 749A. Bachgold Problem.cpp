#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,a,b,diff;
    cin>>n;
    if(n==3)
    {
        cout<<"1"<<endl<<"3";
        return 0;
    }
    if(n%2==0)
    {
        cout<<n/2<<endl;
        for(i=1;i<=n/2;i++)
        {
            cout<<"2"<<" ";
        }
    }
    else
    {
        cout<<n/2<<endl;
        for(i=1;i<=(n/2)-1;i++)
        {
            cout<<"2"<<" ";
        }
        cout<<"3";
    }
}

