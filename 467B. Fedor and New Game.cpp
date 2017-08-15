#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,i,j,x,cnt,cnt1=0;
    string s,str;
    cin>>n>>m>>k;

    vector<int>v;
    for(i=0;i<=m;i++)
    {
        cin>>x;
        v.push_back(x);
    }

    vector<int>::iterator it=v.end();
    it--;
    s=bitset<64>(*it).to_string();
    //cout<<s<<endl;
    it--;
    while(it!=v.begin()-1)
    {
        cnt=0;
        str=bitset<64>(*it).to_string();
        for(i=0;i<64;i++)
        {
            if(s[i]!=str[i])
            {
                cnt++;
            }
        }
        if(cnt<=k)
        {
            cnt1++;
        }
        it--;

    }
    cout<<cnt1;


}
