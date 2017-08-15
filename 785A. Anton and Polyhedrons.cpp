#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,k,l,cnt=0;
    string s;
    cin>>n;
    while(n)
    {
        cin>>s;
        if(s=="Tetrahedron")
            cnt+=4;
        else if(s=="Cube")
            cnt+=6;
        else if(s=="Octahedron")
            cnt+=8;
        else if(s=="Dodecahedron")
            cnt+=12;
        else
            cnt+=20;

        n--;

    }
    cout<<cnt;
}
