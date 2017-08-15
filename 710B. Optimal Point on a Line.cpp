#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x,y,cnt=0;
    list<int>lst;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        lst.push_back(x);
    }
    if(n%2==0)
    {
        y=n/2;
    }
    else
    {
        y=(n+1)/2;
    }
    lst.sort();
    list<int>::iterator it=lst.begin();
    while(it!=lst.end())
    {
        cnt++;
        if(cnt==y)
        {
            cout<<*it;
            return 0;
        }
        it++;
    }

}
