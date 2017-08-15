#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j,k,l,y,x,z,total=0;
    cin>>s;
    char ch;
    ch='a';
    for(i=0;i<s.length();i++)
    {
        x=abs(s[i]-ch);
        k=abs(26-x);
        y=min(x,k);
        ch=s[i];
        total=total+y;

    }
    cout<<total;
}
