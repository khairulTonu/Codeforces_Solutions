#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l1,r1,l2,r2,k,x,y,z,p,q,r;
    scanf("%I64d%I64d%I64d%I64d%I64d",&l1,&r1,&l2,&r2,&k);
    if(l2>r1||l1>r2)
    {
        cout<<"0";
        return 0;
    }
    x=max(l1,l2);
    y=min(r1,r2);
    p=max(x,y);
    q=min(x,y);
    z=p-q+1;
    if(k<=p && k>=q)
    {
        printf("%I64d",z-1);
    }
    else
    {
        printf("%I64d",z);
    }

}
