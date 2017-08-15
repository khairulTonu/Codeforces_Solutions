#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,i,j,k,l,cnt=0,cnt0=0;
    cin>>s>>k;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='0')
            cnt++;
    }
    if(cnt<k)
    {
        cout<<s.size()-1;
        return 0;
    }
    cnt=0;
    for(i=s.size()-1;i>=0;i--)
    {
        if(s[i]!='0')
            cnt++;
        if(s[i]=='0')
            cnt0++;
        if(cnt0==k)
        {
            cout<<cnt;
            return 0;
        }
    }


}
