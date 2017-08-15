#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,j,k,l,x;
    cin>>n>>m;
    x=n;
    for(i=1;;i++)
    {
        n-=i;
        //cout<<n<<endl;
        if(n<=0)
        {
            cout<<i;
            return 0;
        }
        n+=m;
        if(n>x)
        {
            n=x;
        }
    }
}
