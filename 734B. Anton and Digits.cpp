#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k2,k3,k5,k6,cnt256=0,cnt32=0,result;
    cin>>k2>>k3>>k5>>k6;
    while(k2!=0&&k5!=0&&k6!=0)
    {
        k2--;
        k5--;
        k6--;
        cnt256++;
    }
    while(k3!=0&&k2!=0)
    {
        k3--;
        k2--;
        cnt32++;
    }
    result=cnt256*256+cnt32*32;
    cout<<result;

}
