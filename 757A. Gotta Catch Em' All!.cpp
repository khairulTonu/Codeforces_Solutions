#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j,k,l,cnt=0,cntB=0,cntb=0,cntu=0,cntl=0,cnta=0,cnts=0,cntr=0;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='B')
        {
            cntB++;
        }
        else if(s[i]=='b')
        {
            cntb++;
        }
        else if(s[i]=='u')
        {
            cntu++;
        }
        else if(s[i]=='l')
        {
            cntl++;
        }
        else if(s[i]=='a')
        {
            cnta++;
        }
        else if(s[i]=='s')
        {
            cnts++;
        }
        else if(s[i]=='r')
        {
            cntr++;
        }
    }

    while(cntB>=1&&cntb>=1&&cntu>=2&&cntl>=1&&cnta>=2&&cnts>=1&&cntr>=1)
    {
        cnt++;
        cntB--;
        cntb--;
        cntu-=2;
        cntl--;
        cnta-=2;
        cnts--;
        cntr--;
    }
    cout<<cnt;

}
