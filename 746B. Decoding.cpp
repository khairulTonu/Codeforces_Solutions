#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=1,k=0,l,n;
    string s1,s2;
    char s[5000];
    cin>>n>>s1;
    if(s1.size()%2==1)
    {
        for(i=0; i<s1.size(); i++)
        {
            if(i%2==1)
            {
                s[(s1.size()/2)-j]=s1[i];
                //cout<<s[(s1.size()/2)-j];
                j++;
            }
            else
            {
                s[(s1.size()/2)+k]=s1[i];
                //cout<<s[(s1.size()/2)+k];
                k++;
            }
        }
        s[s1.size()]='\0';
        cout<<s;
    }

    else
    {
        for(i=0;i<s1.size();i++)
        {
            if(i%2==0)
            {
                s[(s1.size()/2)-j]=s1[i];
                //cout<<s[(s1.size()/2)-j];
                j++;
            }
            else
            {
                s[(s1.size()/2)+k]=s1[i];
                //cout<<s[(s1.size()/2)+k];
                k++;
            }

        }
        s[s1.size()]='\0';
        cout<<s;
    }

    //s[s1.size()/2]=s1[0];
    //cout<< s[s1.size()/2];



}
