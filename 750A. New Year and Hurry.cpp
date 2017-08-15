#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,n,cnt=0,sum=0;
    cin>>n>>k;

    for(i=1;i<=n;i++)
    {
        if(sum+5*i+k<=240)
        {
            cnt++;
            sum+=5*i;
        }
        else
        {
            break;
        }
    }
    cout<<cnt;
}
