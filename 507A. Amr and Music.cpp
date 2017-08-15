#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int a[100001],b[100001];
    int i,j=0,k,l,total=0,n,m,test=0,*p;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    sort(v.begin(),v.end());

    vector<int>::iterator it=v.begin();
    while(it!=v.end())
    {
        test=total+*it;
        if(test<=k)
        {
            total=test;
            for(i=0;i<n;i++)
            {
                if(*it==a[i])
                {
                    p = find (b,b+j,i+1);
                    if(p==(b+j))
                    {
                        b[j]=i+1;
                        j++;
                        break;
                    }
                }
            }
        }
        it++;

    }
    cout<<j<<endl;
    for(i=0;i<j;i++)
    {
        cout<<b[i]<<" ";
    }


}

