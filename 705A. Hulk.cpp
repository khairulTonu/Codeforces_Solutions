#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,x,y;
    cin>>n;
    x=n%2;
    y=n/2;
    if(x==0)
    {
        for(i=1; i<n; i++)
        {
            if(i%2==1)
            {
                cout<<"I hate that ";
            }
            else
            {
                cout<<"I love that ";
            }
        }
        cout<<"I love it";
    }
    else
    {
        if(n==1)
        {
            cout<<"I hate it";
        }
        else
        {
            for(i=1; i<n; i++)
            {
                if(i%2==1)
                {
                    cout<<"I hate that ";
                }
                else
                {
                    cout<<"I love that ";
                }
            }
            cout<<"I hate it";
        }
    }
}
