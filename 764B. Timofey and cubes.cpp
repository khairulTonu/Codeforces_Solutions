#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[200005],b[200005];
    int n,i,j,k,l,x,y;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>b[i];
        a[i]=b[i];
    }
    //x=(n/2)+1;
    //a[x]=b[x];
    //swap(a[1],a[n]);

    for(i=1; i<=n-i+1; i++)
    {
        if(i%2==1)
        {
            swap(a[i],a[n-i+1]);
        }


    }
    for(i=1; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }

}
