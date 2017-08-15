#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    int r;
    cin>>c>>r;
    if((c>='b'&&c<='g')&&(r>=2&&r<=7))
    {
        cout<<"8";
    }
    else if((c=='h'||c=='a')&&(r>=2&&r<=7))
    {
        cout<<"5";
    }
    else if((r==1||r==8)&&(c>='b'&&c<='g'))
    {
        cout<<"5";
    }

    else
    {
        cout<<"3";
    }
}
