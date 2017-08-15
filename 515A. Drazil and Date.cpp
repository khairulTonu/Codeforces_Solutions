#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,s,x;
    cin>>a>>b>>s;
    x=abs(a)+abs(b);
    if(s>=x&&(s-x)%2==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
