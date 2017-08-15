#include<bits/stdc++.h>
using namespace std;
int u[3000001],v[3000001];
set<int>s;
int main()
{

    int n,i,j,k,l,m,p=1;
    int x,y,z;
    //cin>>n>>m>>k;
    scanf("%d%d%d",&n,&m,&k);
    for(i=1; i<=m; i++)
    {
        //cin>>x;
        scanf("%d",&x);
        s.insert(x);
    }
    if(s.count(1))
    {
        cout<<"1";
        return 0;
    }
    for(i=1; i<=k; i++)
    {
        //cin>>u[i]>>v[i];
        scanf("%d%d",&u[i],&v[i]);
    }
    for(i=1; i<=k; i++)
    {
        if(u[i]==p)
        {
            if(s.count(u[i]))
            {
                //cout<<u[i];
                printf("%d",u[i]);
                return 0;
            }
            else if(s.count(v[i]))
            {
                //cout<<v[i];
                printf("%d",v[i]);
                return 0;
            }
            p=v[i];

        }
        else if(v[i]==p)
        {
            if(s.count(u[i]))
            {
                //cout<<u[i];
                printf("%d",u[i]);
                return 0;
            }
            else if(s.count(v[i]))
            {
                //cout<<v[i];
                printf("%d",v[i]);
                return 0;
            }
            p=u[i];
        }


    }
    //cout<<p;
    printf("%d",p);

}
