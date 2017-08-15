#include<bits/stdc++.h>
using namespace std;
set<int>s;
void func(int x,int d)
{
    for(int i=1; x*i<=d; i++)
    {
        if(x*i<=d)
        {
            s.insert(x*i);
        }
    }
}

int main()
{
    int k,l,m,n,d,i,j;

    cin>>k>>l>>m>>n>>d;

    func(k,d);
    func(l,d);
    func(m,d);
    func(n,d);

    cout<<s.size();



}
