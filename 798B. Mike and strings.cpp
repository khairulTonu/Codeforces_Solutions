#include<bits/stdc++.h>
using namespace std;

int modify(string temp,string v1)
{
    char ch;
    int mv=0;
    while(temp!=v1)
    {
        if(mv>v1.size())
        {
            mv=-1;
            break;
        }
        ch=v1[0];
        for(int i=1; i<v1.size(); i++)
        {
            v1[i-1]=v1[i];
        }
        v1[v1.size()-1]=ch;
        mv++;

    }
    return mv;
}


int main()
{
    string s,temp;
    vector<string>v,v1;

    int n,i,j,k,l,mn=9999999999,cur_mv=0,err=0,f=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>s;
        v1.push_back(s);
    }
    //vector<string>::iterator it=v1.begin();
    for(i=0; i<n; i++)
    {
        temp=v1[i];
        cur_mv=0;
        f=0;
        for(j=0; j<n; j++)
        {

            if(i!=j)
            {
                if(modify(temp,v1[j])==-1)
                {
                    f=-1;
                    err++;
                    break;
                }
                cur_mv+=modify(temp,v1[j]);
            }
        }
        //cout<<cur_mv<<endl;
        if(f!=-1)
        {
            mn=min(mn,cur_mv);
        }

    }
    if(err>=n)
    {
        cout<<"-1";
    }
    else
    {
        cout<<mn;
    }

}
