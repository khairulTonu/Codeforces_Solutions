#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,j,k,l,a,b;
    cin>>a>>b;
    while(a<=b)
    {
        a*=3;
        b*=2;
        i++;
    }
    cout<<i;
}
