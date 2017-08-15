#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    string s;


    cin>>n>>s;

    for(i=0;i<s.size();)
    {
        if(s[i]=='o'&&s[i+1]=='g'&&s[i+2]=='o')
        {
            i=i+3;
            cout<<"***";
            while(1)
            {
                if(s[i]=='g'&&s[i+1]=='o')
                {
                    i=i+2;
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            cout<<s[i];
            i++;
        }

    }

}
