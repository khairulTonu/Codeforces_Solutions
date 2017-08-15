#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m,i,k,l=0;
    cin>>n>>m;
    char j;
    k=n*m;
    for(i=1;i<=k;i++)
    {
        cin>>j;
        if(j=='C'||j=='Y'||j=='M')
        {
            l=1;
        }
    }
    if(l==1)
    {
        cout<<"#Color";
    }
    else
    {
        cout<<"#Black&White";
    }
}
