#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,c,d,v,i;
    double x,y=100001.00,z;
    cin>>a>>b>>n;
    for(i=0;i<n;i++)
    {
        cin>>c>>d>>v;
        x=sqrt(((c-a)*(c-a))+((d-b)*(d-b)));
        z=x/v;
        y=min(y,z);
    }
    printf("%.20lf",y);
}
