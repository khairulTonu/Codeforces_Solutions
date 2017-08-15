#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,temp;
    map<string,int>mp;
    //vector<char>ch;
    //char a[1000];
    vector<string>v;
    int i,j,k,l,n;
    cin>>n>>s;
    //scanf("%d%s",&n,&s);
    for(j=0; j<n; j++)
    {
        cin>>s1;
        //scanf("%s",&s1);
        for(i=0; i<3; i++)
        {
            temp.push_back(s1[i]);
        }
        //v.push_back(temp);
        ++mp[temp];
        temp.clear();
        for(i=5;i<=7;i++)
        {
            temp.push_back(s1[i]);
        }
        //v.push_back(s1);
        ++mp[temp];
        temp.clear();

    }
    for(map<string,int>::iterator it=mp.begin();it!=mp.end();it++)
    {
        //cout<<it->first<<" "<<it->second<<endl;
        if(it->second%2!=0)
        {
            cout<<"contest";
            return 0;
        }
    }
    cout<<"home";


}
