#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,maxL=0;
    string s,temp,temp2;
    vector<string>str;
    cin>>n>>s;

    for(i=0; i<=s.size(); i++)
    {
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
        {
            temp.push_back(s[i]);
        }
        else if(s[i]=='(')
        {
            if(temp.size())
            {
                //cout<<l<<endl;

                l=temp.size();
                maxL=max(maxL,l);
                temp.clear();
            }
            while(s[i]!=')')
            {
                if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
                {
                    temp2.push_back(s[i]);
                }
                else
                {
                    if(temp2.size())
                    {
                        str.push_back(temp2);
                        temp2.clear();
                    }
                }
                i++;

            }
            if(temp2.size())
            {
                str.push_back(temp2);
                temp2.clear();
            }

        }
        else
        {
            if(temp.size())
            {

                l=temp.size();
                //cout<<l<<endl;
                maxL=max(maxL,l);
                temp.clear();
            }
        }
    }

    cout<<maxL<<" "<<str.size();

}
