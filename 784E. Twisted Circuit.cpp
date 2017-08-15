#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,w,res,a,b,c,d,e,f;
    cin>>x>>y>>z>>w;
    a=x^y;
    b=z|w;
    c=y&z;
    d=x^w;
    e=a&b;
    f=c|d;
    res=e^f;
    cout<<res;

}
