#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,cur=1,a[200001];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(a[i]>=cur)
        {
            cur++;
        }
    }
    cout<<cur;

}
