#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,n,cnt1=0,cnt2=0;
    cin>>n>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='<')
        {
            cnt1++;
        }
        else
        {
            break;
        }
    }

    for(i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='>')
        {
            cnt2++;
        }
        else
        {
            break;
        }
    }

    cout<<cnt1+cnt2;
}
