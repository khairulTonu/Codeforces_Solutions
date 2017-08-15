#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0,k,l,n,m,p,pos,posL,x,y;
    int a[1000];
    char s[1000];
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>s;
        l=strlen(s);
        a[j]=l;
        j++;
    }

    cin>>s;
    l=strlen(s);
    sort(a,a+j);
    for(i=0;i<j;i++)
    {
        if(a[i]==l)
        {
            pos=i+1;
            break;
        }
    }

    for(i=0;i<j;i++)
    {
        if(a[i]==l)
        {
            posL=i+1;

        }
    }

    x=(pos-1)/k;
    y=x*5;
    cout<<pos+y<<" ";
    m=(posL-1)/k;
    p=m*5;
    cout<<posL+p;



}
