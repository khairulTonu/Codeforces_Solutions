#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int i, n,x,y,pos,t,jmp,t_jmp;
    char ch;

    cin>>n>>ch;
    if(ch=='a')
    {
        ch='4';
    }
    else if(ch=='b')
    {
        ch='5';
    }
    else if(ch=='c')
    {
        ch='6';
    }
    else if(ch=='f')
    {
        ch='1';
    }
    else if(ch=='e')
    {
        ch='2';
    }
    else
    {
        ch='3';
    }

    x=n%4;
    y=n/4;
    if(x==1||x==2)
    {
        pos=y+y+x;
        //sum=sum-1;
        t=(pos-1)*6+3*y+(pos-(y+1))+ch-48;
        cout<<t;
    }
    else
    {
        pos=n/2;
        if(n%2!=0)
        {
            jmp=(n/4);

        }
        else if(n%2==0)
        {
            jmp=(n/4)-1;
        }
        t_jmp=3*jmp+(pos-(jmp+1));
        t=(pos-1)*6+t_jmp+ch-48;
        cout<<t;
    }

}
