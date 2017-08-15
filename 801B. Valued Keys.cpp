#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000],b[1000],c[1000];
    int i,j,k,l;
    cin>>a>>b;
    for(i=0;i<strlen(a);i++)
    {
        if(b[i]>a[i])
        {
            cout<<"-1";
            return 0;
        }
        else if(a[i]==b[i])
        {

            c[i]='z';
        }
        else
        {
            c[i]=b[i];
        }
    }
    c[i]='\0';

    cout<<c;
}
