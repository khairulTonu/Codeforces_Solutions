#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,cnt=1,tempa=1,tempb=2,i=1;
    cin>>a>>b;
    while(1)
    {
        if(a<=0&&i%2==1)
        {
            cout<<"Vladik";
            return 0;
        }
        if(b<=0&&i%2==0)
        {
            cout<<"Valera";
            return 0;
        }
        if(i%2==1)
        {
            a-=tempa;
            if(a<0)
            {
                cout<<"Vladik";
                return 0;
            }
            tempa+=2;

        }
        if(i%2==0)
        {
            b-=tempb;
            if(b<0)
            {
                cout<<"Valera";
                return 0;
            }
            tempb+=2;
        }
        i++;
        //cout<<a<<"  "<<b<<endl;

    }
}
