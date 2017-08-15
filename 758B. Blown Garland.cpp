#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char ch[1000];
    int i,j=0,k,l,m,n,x,y,z,kr=0,kb=0,ky=0,kg=0;
    cin>>s;
    while(j<=3)
    {
        for(i=0; i<s.size(); i++)
        {
            if(i%4==j)
            {
                if(s[i]!='!')
                {
                    ch[j]=s[i];
                    break;
                }
            }
        }
        j++;

    }
    ch[j]='\0';
    //cout<<ch;
    for(i=0;i<s.size();i++)
    {
        if(s[i]!=ch[i%4])
        {
            if(ch[i%4]=='R')
            {
                kr++;
            }
            else if(ch[i%4]=='B')
            {
                kb++;
            }
            else if(ch[i%4]=='Y')
            {
                ky++;
            }
            else if(ch[i%4]=='G')
            {
                kg++;
            }
        }
    }
    cout<<kr<<" "<<kb<<" "<<ky<<" "<<kg<<endl;

}
