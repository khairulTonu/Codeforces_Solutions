#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y;
    cin>>x;
    y=powl(x,2);
    for(long i=1; i<=2000; i++)
    {
        for(long j=2000; j>=1; j--)
        {
            //cout<<i*10+j<<endl;
            if(y==(i+j))
            {
                cout<<i*10+j;
                return 0;
            }
        }
    }
}
