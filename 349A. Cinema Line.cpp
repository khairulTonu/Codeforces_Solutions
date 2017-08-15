#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,t=0,f=0;
    cin>>n;
    int a[200005];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==25)
        {
            t++;
        }
        else if(a[i]==50)
        {
            if(t==0)
            {
                cout<<"NO";
                return 0;
            }
            t--;
            f++;
        }
        else if(a[i]==100)
        {
            if(t>=1&&f>=1)
            {
                t--;
                f--;
            }
            else if(t>=3)
            {
                t-=3;
            }
            else
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
}
