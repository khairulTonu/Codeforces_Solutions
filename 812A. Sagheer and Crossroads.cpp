#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,l,s,r,p,f=0;
    int a[10][10];
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=4; j++)
        {
            cin>>a[i][j];
        }

    }
    for(i=1; i<=4; i++)
    {
        if(a[i][4]==1&&(a[i][1]==1||a[i][2]==1||a[i][3]==1))
        {
            f++;
        }

    }
    if(f)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

}
