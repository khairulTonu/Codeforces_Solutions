#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,i,j,k,l,x;
    cin>>m>>x;
    if((m%6==1||m%6==4)&&x==1)
    {
        cout<<"0";
    }
    else if((m%6==2||m%6==3)&&x==2)
    {
        cout<<"0";
    }
    else if((m%6==0||m%6==5)&&x==0)
    {
        cout<<"0";
    }
    else if((m%6==1||m%6==2)&&x==0)
    {
        cout<<"1";
    }
    else if((m%6==3||m%6==0)&&x==1)
    {
        cout<<"1";
    }
    else if((m%6==4||m%6==5)&&x==2)
    {
        cout<<"1";
    }
    else
    {
        cout<<"2";
    }
}
