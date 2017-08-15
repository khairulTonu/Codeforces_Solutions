#include<bits/stdc++.h>
using namespace std;

int main()
{

    char ch1,ch2,ch,ch3,ch4;
    int i,j,k,n;
    cin>>n;
    cin>>ch1>>ch2>>ch>>ch3>>ch4;
    if(ch3>'5')
    {
        ch3='0';
    }

    if(n==12)
    {

        if(ch1>'1'&&ch2>'2')
        {
            ch1='0';
            //ch2='0';
        }
        else if(ch1>'1'&&ch2<='2')
        {
            ch1='1';
        }
        else if(ch1=='1'&&ch2>'2')
        {
            ch2='0';
        }
        else if(ch1=='0'&&ch2=='0')
        {
            ch2='1';
        }
    }

    if(n==24)
    {
        if(ch1>'2'&&ch2>'3')
        {
            ch1='0';
            //ch2='0';
        }
        else if(ch1>'2'&&ch2<='3')
        {
            ch1='1';
        }
        else if(ch1=='2'&&ch2>'3')
        {
            ch2='0';
        }

    }

    cout<<ch1<<ch2<<ch<<ch3<<ch4;

}

