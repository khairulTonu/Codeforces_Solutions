#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,k,i,j,l,p=0;
    cin>>n>>m>>k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            p++;
            if(p==k)
            {
                cout<<i<<" "<<j<<" ";
                if(k%2==0)
                {
                    cout<<"R";
                }
                else {
                    cout<<"L";
                }

                return 0;
            }
            p++;
            if(p==k)
            {
                cout<<i<<" "<<j<<" ";
                if(k%2==0)
                {
                    cout<<"R";
                }
                else {
                    cout<<"L";
                }

                return 0;
            }
        }
    }
}
