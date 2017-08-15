#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int n,m,i,j,k,w=0,x,y,z;
    cin>>n>>m;
    x=n;
    while(x)
    {
        cin>>y;
        if(y!=0)
        {
            for(i=0; i<y; i++)
            {
                cin>>z;
                s.insert(z);
            }
        }
        x--;
    }

    if(s.size()!=m)
    {
        cout<<"NO";
        return 0;

    }
    cout<<"YES";



}
