#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,n,m,cnt=0,sum=0;
    cin>>n;


    for(i=1; i<=n+1; i++)
    {
        if(i%2==1)
        {
            if(sum+1>n)
            {
                cout<<cnt;
                return 0;
            }
            sum=sum+1;
            cnt++;
        }
        else
        {
            if(sum+2>n)
            {
                cout<<cnt;
                return 0;
            }
            sum=sum+2;
            cnt++;
        }

    }
}
