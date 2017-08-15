#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    int n,k,i,j,l,posG,posT;
    cin>>n>>k;
    cin>>a;
    l=strlen(a);
    for(i=0; i<l; i++)
    {
        if(a[i]=='G')
        {
            posG=i;
        }
        else if(a[i]=='T')
        {
            posT=i;
        }
    }
    if(posT<posG)
    {
        while(1)
        {
            if(a[posG]=='#')
            {
                cout<<"NO";
                return 0;
            }
            else if(a[posG]=='T')
            {
                cout<<"YES";
                return 0;
            }
            else if(posG<0)
            {
                cout<<"NO";
                return 0;
            }
            posG=posG-k;
        }
    }
    else
    {
        while(1)
        {
            if(a[posG]=='#')
            {
                cout<<"NO";
                return 0;
            }
            else if(a[posG]=='T')
            {
                cout<<"YES";
                return 0;
            }
            else if(posG>(l-1))
            {
                cout<<"NO";
                return 0;
            }
            posG=posG+k;
        }
    }
}
