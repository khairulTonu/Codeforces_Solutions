#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int i,j,k,la,lb,m,n;
    cin>>a>>b;
    la=a.size();
    lb=b.size();
    if(a!=b)
    {
        cout<<max(la,lb);
    }
    else
    {
        cout<<"-1";
    }

}
