#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,k,r,x,y;
    cin>>k>>r;
    for(i=1;;i++)
    {
        x=(k*i)%10;
        if(x==r||x==0)
        {
            cout<<i;
            return 0;
        }

    }
}
