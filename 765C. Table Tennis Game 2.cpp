#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,a,b,x,y,z;
    cin>>k>>a>>b;
    if(a<k&&b<k)
    {
        cout<<"-1";
        return 0;
    }
    x=a/k+b/k;
    cout<<x;
}
