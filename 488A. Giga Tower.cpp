#include<bits/stdc++.h>
using namespace std;

int check(int a)
{
    int f=0,rem;
    while(a!=0)
    {
        rem=a%10;
        a=a/10;
        if(rem==8)
        {
            f++;
        }
        //cout<<rem<<endl;
    }
    return f;


}


int main()
{
    int a,i,j,k,l,b;
    cin>>a;
    i=a;
    a++;

    while(1)
    {

        if(check(abs(a)))
        {

            cout<<a-i;
            return 0;

        }
        a++;
    }
}
