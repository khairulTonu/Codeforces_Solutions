#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,x,cntA=0,cntC=0,cntG=0,cntT=0,cntQ=0;
    string s;
    cin>>n>>s;
    if(n%4!=0)
    {
        cout<<"===";
        return 0;
    }
    x=n/4;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='A')
        {
            cntA++;
        }
        else if(s[i]=='C')
        {
            cntC++;
        }
        else if(s[i]=='G')
        {
            cntG++;
        }
        else if(s[i]=='T')
        {
            cntT++;
        }
        else
        {
            cntQ++;
        }
    }
    if(cntA>x||cntC>x||cntG>x||cntT>x)
    {
        cout<<"===";
        return 0;
    }
    while(cntA!=x)
    {
        size_t st=s.find('?');
        s[int(st)]='A';
        cntA++;
    }
    //cout<<int(st);
    while(cntC!=x)
    {
        size_t st=s.find('?');
        s[int(st)]='C';
        cntC++;
    }
    while(cntG!=x)
    {
        size_t st=s.find('?');
        s[int(st)]='G';
        cntG++;
    }
    while(cntT!=x)
    {
        size_t st=s.find('?');
        s[int(st)]='T';
        cntT++;
    }
    cout<<s;


}
