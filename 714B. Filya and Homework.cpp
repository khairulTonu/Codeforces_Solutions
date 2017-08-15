#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int n,i,j,k=0,l,x,p,q,r;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        s.insert(x);
    }
    if(s.size()<=2)
    {
        cout<<"YES";
    }
    else if(s.size()>3)
    {
        cout<<"NO";
    }
    else
    {
        set<int>::iterator it=s.begin();
        while(it!=s.end())
        {

            if(k==0)
            {
                p=*it;
                k++;
            }
            else if(k==1)
            {
                q=*it;
                k++;
            }
            else if(k==2)
            {
                r=*it;
                k++;
            }
            it++;
        }
        if(r-q==q-p)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }

}
