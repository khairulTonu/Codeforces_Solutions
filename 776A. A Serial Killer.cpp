#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector<string>v;
    string s1,s2,tmp1,tmp2;
    int i,j,k,l,m,n;
    cin>>s1>>s2>>n;
    vector<pair<string,string> >v;
    v.push_back(make_pair(s1,s2));

    while(n)
    {
        cin>>tmp1>>tmp2;
        if(s1==tmp1)
        {
            s1=tmp2;
        }
        else
        {
            s2=tmp2;
        }
        v.push_back(make_pair(s1,s2));
        n--;
    }

    for(vector<pair<string,string> >::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}
