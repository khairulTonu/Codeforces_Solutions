#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,t1,T,s=0,n=0,sum;
    vector<int>t;
    vector<string>v;
    string s1;
    cin>>T;
    j=T;
    while(T)
    {
        cin>>t1>>s1;
        v.push_back(s1);
        t.push_back(t1);
        T--;
    }
    for(i=0;i<v.size();i++)
    {
        if(n==0&&v[i]!="South"||n==20000&&v[i]!="North"||(v[i]=="South"&&n+t[i]>20000))
        {
            cout<<"NO";
            return 0;
        }
        else if(v[i]=="South")
        {
            n+=t[i];
        }
        else if(v[i]=="North")
        {
            n-=t[i];
            if(n<0)
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    if(n==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
