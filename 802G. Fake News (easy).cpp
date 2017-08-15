#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,cnt=0;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='h'&& cnt==0)
        {
            cnt++;
        }
        else if(s[i]=='e'&& cnt==1)
        {
            cnt++;
        }
        else if(s[i]=='i'&& cnt==2)
        {
            cnt++;
        }
        else if(s[i]=='d'&& cnt==3)
        {
            cnt++;
        }
        else if(s[i]=='i'&& cnt==4)
        {
            cnt++;
        }
        if(cnt==5)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";

}
