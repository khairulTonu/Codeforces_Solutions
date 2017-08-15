#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k=0,j;
    cin>>n;
    for (i=2; i*i<=n; i++)
    {
        if (n%i==0)
        {
            k=1;
            break;
        }
    }
    if (k==0)
    {
        cout<<1;
        return 0;
    }
    if (n%2==0)
    {
        cout<<2;
        return 0;
    }
    if (n%2==1)
    {
        k=0;
        for (j=2; j*j<=n-2; j++)
        {
            if ((n-2)%j==0)
            {
                k=1;
                break;
            }
        }
        if (k==0)
        {
            cout<<2;
            return 0;
        }
    }
    cout<<3;
}
