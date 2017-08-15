#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,sum=0;
    cin>>a>>b>>c;
    int x=a,y=b,z=c;
    while(x!=0&&y>=2&&z>=4)
    {
        sum+=(1+2+4);
        x-=1;
        y-=2;
        z-=4;
    }
    cout<<sum;
}
