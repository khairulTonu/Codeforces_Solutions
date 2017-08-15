#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j,k,l,x,f=0;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        x=s[i]-48;
        if(x%2==0)
        {
            f++;
            break;
        }
    }
    if(!f)
    {
        cout<<"-1";
        return 0;
    }

    for(i=0; i<s.size(); i++)
    {
        x=s[i]-48;
        if(x%2==0&&s[i]<s[s.size()-1])
        {
            swap(s[i],s[s.size()-1]);
            cout<<s;
            return 0;
        }
    }

    for(i=s.size()-1; i>=0; i--)
    {
        x=s[i]-48;
        if(x%2==0&&s[i]>s[s.size()-1])
        {
            swap(s[i],s[s.size()-1]);
            cout<<s;
            return 0;
        }
    }







}
