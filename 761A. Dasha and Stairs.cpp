#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,j,k,x,y,z,cnte=0,cnto=0;
    cin>>a>>b;
    c=a+b;
    if(c==0)
    {
        cout<<"NO";
        return 0;
    }
    for(i=1;i<=c;i++)
    {
        if(i%2==0)
        {
            cnte++;
        }
        else
        {
            cnto++;
        }
    }
    if(cnte==a&&cnto==b)
    {
        cout<<"YES";
        return 0;
    }
    cnte=0,cnto=0;
    for(i=2;i<=c+1;i++)
    {
        if(i%2==0)
        {
            cnte++;
        }
        else
        {
            cnto++;
        }
    }
    if(cnte==a&&cnto==b)
    {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";

}
