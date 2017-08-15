#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int m,i,k,l=0,r=0,u=0,d=0,w,x,y,z;
    cin>>s;
    m=s.length();
    if(m%2!=0)
    {
        cout<<"-1";
        return 0;
    }
    else
    {
        for(i=0; i<m; i++)
        {
            if(s[i]=='L')
            {
                l++;
            }
            else if(s[i]=='R')
            {
                r++;
            }
            else if(s[i]=='U')
            {
                u++;
            }
            else if(s[i]=='D')
            {
                d++;
            }
        }
        //cout<<l<<" "<<r<<" "<<u<<" "<<d<<endl;
        if(l==r)
        {
            x=min(u,d);
            y=max(u,d);
            cout<<(y-x)/2;
        }
        else if(u==d)
        {
            x=min(l,r);
            y=max(l,r);
            cout<<(y-x)/2;
        }
        else if(l==r&&u==d)
        {
            cout<<"0";
        }
        else if((l+r)%2!=0)
        {
            x=min(l,r);
            w=max(l,r);
            x++;
            y=max(u,d);
            z=min(u,d);
            y--;
            cout<<(((y-z)+(w-x))/2)+1;


            /*if(l+r>u+d)
            {
                x=min(l,r);
                y=max(l,r);
                x=x+u+d;
                z=min(x,y);
                w=max(x,y);
                cout<<(u+d)+(w-z);

            }
            else
            {
                x=min(u,d);
                y=max(u,d);
                x=x+l+r;
                z=min(x,y);
                w=max(x,y);
                cout<<(l+r)+(w-z);
            }*/
        }
        else
        {
            w=max(l,r);
            x=min(l,r);
            y=max(u,d);
            z=min(u,d);
            cout<<((w-x)+(y-z))/2;
        }
    }
}
