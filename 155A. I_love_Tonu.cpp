#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[2000];
    int n,i,j,k,l,amazing=0,x=0,y=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    x=a[0];
    y=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>x)
        {
            amazing++;
            x=a[i];
        }
        else if(a[i]<y)
        {
            amazing++;
            y=a[i];
        }
    }
    cout<<amazing;

}
