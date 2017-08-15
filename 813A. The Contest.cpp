#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,m;
    int a[100005],l[100005],r[100005];

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>l[i]>>r[i];
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        int f=0;
        for(j=0;j<m;j++)
        {
            if(a[i]>=l[j]&&a[i]<=r[j])
            {
                f++;
                sum+=a[i];
                break;
            }
        }
        if(!f)
        {
            cout<<"-1";
            return 0;
        }
    }
    cout<<sum;

}
