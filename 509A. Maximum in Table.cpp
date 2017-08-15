#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,a[11][11];
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0||j==0)
            {
                a[i][j]=1;
            }
        }
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            a[i][j]=a[i-1][j]+a[i][j-1];
        }

    }
    cout<<a[n-1][n-1];
}
