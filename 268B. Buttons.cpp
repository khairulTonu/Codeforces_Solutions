#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,sum=0,n;
    cin>>n;
    for(i=1;i<=n-1;i++)
    {
        sum+=(n-i)*i;
    }
    cout<<sum+n;

}
