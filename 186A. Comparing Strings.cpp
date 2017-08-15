#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    int i,j,k,l1,l2,cnt=0,f=0;
    cin>>s1>>s2;
    l1=s1.length();
    l2=s2.length();
    if(l1!=l2)
    {
        cout<<"NO";
        return 0;
    }
    for(i=0;i<l1;i++)
    {
        if(s1[i]!=s2[i])
        {
            cnt++;
        }
    }
    if(cnt==1||cnt>2)
    {
        cout<<"NO";
        return 0;
    }
    if(cnt==2)
    {
        for(i=0;i<l1;i++)
        {
            if(s1[i]!=s2[i]&&f==0)
            {
                j=i;
                f++;
            }
            else if(s1[i]!=s2[i]&&f==1)
            {
                k=i;
            }
        }
        if(s1[j]==s2[k]&&s1[k]==s2[j])
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }


}
