#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000001],b[1000001];;
    cin>>a>>b;
    int i,j,k,la,lb,m,n,d;
    la=strlen(a);
    lb=strlen(b);
    if(la>lb)
    {
        d=la-lb;
        for(i=lb-1;i>=0;i--)
        {
            b[i+d]=b[i];
        }
        for(i=0;i<d;i++)
        {
            b[i]='0';
        }
        b[lb+d]='\0';
    }
    else if(lb>la)
    {
        d=lb-la;
        for(i=la-1;i>=0;i--)
        {
            a[i+d]=a[i];
        }
        for(i=0;i<d;i++)
        {
            a[i]='0';
        }
        a[la+d]='\0';
    }
    //a[la+d]='\0';
    //cout<<b;
    m=strcmp(a,b);
    if(m>0)
    {
        cout<<">";
    }
    else if(m<0)
    {
        cout<<"<";
    }
    else
    {
        cout<<"=";
    }

}

