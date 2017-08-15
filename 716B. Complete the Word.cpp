#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[60001],a[30],ch;
    cin>>s;
    int i,j=0,k,l,m,n,cnt=0,x,r,flag,y,z=0;
    l=strlen(s);
    set<char>c;
    for(i=0; i<26; i++)
    {
        a[j]='A'+i;
        j++;
    }
    for(i=0; i<l; i++)
    {
        if(s[i]=='?')
        {
            cnt++;
        }
        else
        {
            c.insert(s[i]);
        }
    }
    //cout<<cnt<<endl;
    x=26-c.size();
    //cout<<c.size();
    set<char>::iterator it=c.begin();
    while(it!=c.end())
    {
        cout<<*it;
        it++;
    }

    /*if(cnt<x)
    {
        cout<<"-1";
        return 0;
    }
    y=cnt-x;

    for(i=0; i<l; i++)
    {
        if(s[i]=='?'&&z<y)
        {
            s[i]='A';
            z++;
        }
        else if(s[i]=='?')
        {
            for(k=0; k<26; k++)
            {
                flag=0;
                for(m=0; m<l; m++)
                {
                    if(s[m]==a[k])
                    {
                        flag++;
                        break;
                    }
                }
                if(flag==0)
                {
                    s[i]=a[k];
                    c.insert(a[k]);
                    break;
                }
            }
        }
        if(c.size()==26)
        {
            r=i;
            break;
        }
    }
    //cout<<r<<endl;
    for(i=0;i<l;i++)
    {
        if(s[i]=='?')
        {
            s[i]='A';
        }
        cout<<s[i];
    }*/






}
