#include<bits/stdc++.h>
using namespace std;

bool check(string a)
{
    string s1,s;
    char ch;
    int l;
    //cout<<a<<endl;

    //
    //strcpy(b,a);
    //cout<<b;
    //l=strcmp(b,strrev(a));
    //cout<<l;
    s1=a;
    for(int i=0;i<a.length();i++)
    {
        if(i==0)
        {
            ch=a[0];
            a[0]=a[4];
            a[4]=ch;
        }
        if(i==1)
        {
            ch=a[1];
            a[1]=a[3];
            a[3]=ch;
        }
    }
    //cout<<a<<" "<<s1;
    //return true;
    if(a==s1)
    {
        //strcpy(s,strrev(b));
        //cout<<s;
        //cout<<"YES"<<endl;
        if(s[0]>'2')
        {
            return false;
        }
        if(s[0]=='2'&&s[1]>'3')
        {
            return false;
        }
        if(s[3]>'5')
        {
            return false;
        }
        else
        {
            return true;
        }

    }
    else
    {
        return false;
    }




}

int main()
{
    string a;
    int n,i,j,k,l;
    cin>>a;
    //cout<<a<<endl;
    for(i=0;; i++)
    {
        //cout<<a<<endl;
        if(check(a))
        {
            cout<<i;
            return 0;
        }
        else
        {
            if(a[4]<'9')
            {
                a[4]=a[4]+1;
            }
            else if(a[4]=='9'&&a[3]<='4')
            {
                a[4]='0';
                a[3]=a[3]+1;
            }
            else if(a[4]=='9'&&a[3]=='5'&&a[0]<'2'&&a[1]<'9')
            {
                a[4]='0';
                a[3]='0';
                a[1]=a[1]+1;
            }
            else if(a[4]=='9'&&a[3]=='5'&&a[0]<'2'&&a[1]=='9')
            {
                a[4]='0';
                a[3]='0';
                a[1]='0';
                a[0]=a[0]+1;
            }
            else if(a[4]=='9'&&a[3]=='5'&&a[0]=='2'&&a[1]<'3')
            {
                a[4]='0';
                a[3]='0';
                a[1]=a[1]+1;
            }
            else
            {
                a[4]='0';
                a[3]='0';
                a[1]='0';
                a[0]='0';
            }
            //a[6]='\0';
        }

    }
}
