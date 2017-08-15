#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,temp;
    string s,a;
    vector<string>str;
    cin>>s>>n;
    for(i=0;i<n;i++)
    {
        temp=0;
        cin>>a;
        for(j=0;j<a.size();j++)
        {
            if(a[j]!=s[j]&&j<s.size())
            {
                temp++;
                break;
            }
        }
        if(temp==0)
        {
            str.push_back(a);
        }
    }
    if(str.size()==0)
    {
        cout<<s;
        return 0;
    }
    sort(str.begin(),str.end());
    vector<string>::iterator it=str.begin();
    cout<<*it;
}
