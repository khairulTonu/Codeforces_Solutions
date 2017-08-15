#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=0,k,l,x,y=0,z,p,q,r,cnt=0;
    vector<int>v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x>y)
        {
            cnt++;
            y=x;
        }
        else
        {
            v.push_back(cnt);
            cnt=1;
            y=x;
        }

    }
    if(n==1)
    {
        cout<<"1";
        return 0;
    }
    if(cnt>1)
    {
        v.push_back(cnt);
    }
    sort(v.begin(),v.end());
    vector<int>::iterator it=v.end()-1;
    cout<<*it;
   /* while(it!=v.end())
    {
        cout<<*it<<" ";
        it++;
    }*/


}
