#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,a,b,diff;
    cin>>n;
    a=1;
    b=n;
    diff=n-1;
    for(i=1;i<=n;i++)
    {
        if(n%i==0&&abs(i-(n/i))<diff)
        {
            diff=abs(i-(n/i));
            a=min(i,n/i);
            b=max(i,n/i);

        }
    }
    cout<<a<<" "<<b;
}
