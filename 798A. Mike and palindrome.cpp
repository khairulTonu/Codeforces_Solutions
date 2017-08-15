#include<bits/stdc++.h>
using namespace std;
bool check(string str)
{

    if( equal(str.begin(), str.begin() + str.size()/2, str.rbegin()) )
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string s,s1;
    int i,j,k,l,cnt=0;
    cin>>s;
    s1=s;
    for(i=0;i<s.length();i++)
    {
        s=s1;
        for(j=0;j<=26;j++)
        {
            s[i]='a'+j;
            if(s!=s1&&check(s))
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";



}
