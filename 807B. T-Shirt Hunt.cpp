#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,p,x,y,f=0,z;
    cin>>p>>x>>y;
    int pre=x;
    while(1)
    {
        i=(y/50)%475;
        for(j=1; j<=25; j++)
        {
            i=(i*96+42)%475;

            if(i+26==p)
            {
                //cout<<y<<endl;
               f++;
               //cout<<z<<endl;
               z=y-pre;
               break;
            }
            //cout<<26+i<<endl;
        }
        if(z<=0&&z%50==0)
        {
            cout<<"0";
            return 0;
        }

        if(z%50==0)
        {
            break;
        }
        y++;
    }
    if(z%100==0)
    {
        cout<<z/100;
    }
    else
    {
        cout<<(z/100)+1;
    }




}
