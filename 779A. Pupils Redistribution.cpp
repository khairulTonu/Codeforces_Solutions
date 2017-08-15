#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt[100005],n,i,j,k,l;
    int a[100005],b[100005];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        cnt[a[i]]++;
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
        cnt[b[i]]--;
    }
    for(i=1;i<=5;i++)
    {
        if(cnt[i]%2!=0)
        {
            cout<<"-1";
            return 0;
        }
    }
    int sum=0;
    for(i=1;i<=5;i++)
    {
        sum+=abs(cnt[i])/2;
    }
    cout<<sum/2;

}
