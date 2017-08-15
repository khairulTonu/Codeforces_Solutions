#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,ans,i,x,rem;
    cin>>n>>k;
    rem=n%k;
    x=k-rem;
    ans=n+x;
    cout<<ans;
}
