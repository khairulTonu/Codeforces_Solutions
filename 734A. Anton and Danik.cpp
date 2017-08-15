#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,cntA=0,cntD=0;
    string s;
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            cntA++;
        }
        else
        {
            cntD++;
        }
    }
    if(cntA>cntD)
    {
        cout<<"Anton";
    }
    else if(cntD>cntA)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
}
