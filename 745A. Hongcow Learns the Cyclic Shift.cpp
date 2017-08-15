#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,temp;
    char ch;
    int i;
    //vector<string>s1;
    set<string>w;
    cin>>s;
    temp=s;
    //s1.push_back(temp);
    for(i=0;i<s.size();i++)
    {
        ch=s[s.size()-1];
        for(int j=s.size()-1;j>=0;j--)
        {
            s[j+1]=s[j];
        }
        s[0]=ch;
        //cout<<s<<endl;
        w.insert(s);

    }
    cout<<w.size();

}
