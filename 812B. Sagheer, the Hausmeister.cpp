#include<bits/stdc++.h>
using namespace std;



int main()
{
    char a[30005],temp[30005];

    int i,j,k,l,n,m;

    cin>>n>>m;
    cin>>a;
    strcpy(temp,a);
    for(i=1; i<=n-1; i++)
    {
        cin>>a;
        if(i%2!=0)
        {
            strrev(a);
        }
        strcat(temp,a);


    }

    cout<<temp;

}
