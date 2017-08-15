#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a,b,i,j,l=0,x,y,z;
    string s;
    cin>>n>>k>>a>>b;
    if(a<k||b<k)
    {
        cout<<"NO";
    }
    else
    {
        if(a>=b)
        {
            while(a>0&&b>0)
            {
                for(i=1; i<=k; i++)
                {
                    cout<<"G";
                }
                a-=k;
                cout<<"B";
                b--;

            }
            if(a>0)
            {
                for(i=1; i<=a; i++)
                {
                    cout<<"G";
                }
            }
            else if(b>0)
            {
                for(i=1; i<=b; i++)
                {
                    cout<<"B";
                }
            }
        }
        else
        {
            while(a>0&&b>0)
            {
                for(i=1; i<=k; i++)
                {
                    cout<<"B";
                }
                b-=k;
                cout<<"G";
                a--;

            }
            if(a>0)
            {
                for(i=1; i<=a; i++)
                {
                    cout<<"G";
                }
            }
            else if(b>0)
            {
                for(i=1; i<=b; i++)
                {
                    cout<<"B";
                }
            }
        }
    }
}
