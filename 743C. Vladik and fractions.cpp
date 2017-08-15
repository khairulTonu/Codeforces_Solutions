#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,z;
    cin>>n;
    if(n==1)
    {
        cout<<"-1";
        return 0;
    }
    x=n;
    y=n+1;
    z=n*(n+1);
    cout<<x<<" "<<y<<" "<<z;
}
