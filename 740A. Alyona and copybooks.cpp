#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,b,c,i, j,k,l,x,y,z,rem1,rem,p;
    cin>>n>>a>>b>>c;
    rem1=n/4;
    k=n%4;
    i=(rem1+1)*4;
    rem=i-n;

    if(k==0)
    {
        cout<<"0";
    }
    else if(rem==1)
    {
        x=min(a,b+c);
        x=min(x,3*c);
        cout<<x;

    }
    else if(rem==2)
    {
        x=min(b,2*a);
        x=min(x,2*c);
        x=min(x,c+3*a);
        cout<<x;
    }
    else if(rem==3)
    {
        z=a+b;
        y=3*a;
        x=min(z,y);
        p=min(x,c);
        cout<<p;
    }


}
