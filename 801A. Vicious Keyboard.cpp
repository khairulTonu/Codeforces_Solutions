#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    memset(s,'0',sizeof(s));
    int i,j,k,l,m,n,cnt=0;
    cin>>s;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='V'&& s[i+1]=='K')
        {
            cnt++;
        }
    }
    for(j=0;j<strlen(s);j++)
    {
        if(s[j]=='V'&&s[j+1]=='V'&&s[j+2]!='K')
        {
            cnt++;
            cout<<cnt;
            return 0;
        }
        else if(s[j]=='K'&&s[j+1]=='K'&&j>0&&s[j-1]!='V')
        {
            cnt++;
            cout<<cnt;
            return 0;
        }
        else if(s[j]=='K'&&s[j+1]=='K'&&j==0)
        {
            cnt++;
            cout<<cnt;
            return 0;
        }

    }
    cout<<cnt;
}
