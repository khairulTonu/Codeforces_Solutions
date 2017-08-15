#include<bits/stdc++.h>
using namespace std;
char s[100];

int main()
{
    char ch[20];
    int n,m,i,j,k=1,l;
    cin>>s;
    m=atoi(s);
    l=strlen(s);
    if(l==1)
    {
        cout<<"1";
        return 0;
    }
    for(i=1;i<l;i++)
    {
        k*=10;
    }
    //ch[0]=s[0];
    //m=atoi(ch);
    ch[0]=s[0];
    ch[1]='\0';
    n=atoi(ch);
    n+=1;
    n*=k;
    cout<<n-m;
}
