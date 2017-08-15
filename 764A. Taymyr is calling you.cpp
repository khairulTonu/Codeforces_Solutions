#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,z,i;
    cin>>n>>m>>z;
    int cnt=0;
    for(i=1;i<=z;i++)
    {
        if(i%n==0&&i%m==0)
        {
            cnt++;
        }
    }
    cout<<cnt;
}
