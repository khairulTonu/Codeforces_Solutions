#include<bits/stdc++.h>
using namespace std;
bool status[1100002];
void siv()
{
    int N=100005;
    int sq=sqrt(N);
    for(int i=4; i<=N; i+=2) status[i]=1;
    for(int i=3; i<=sq; i+=2)
    {
        if(status[i]==0)
        {
            for(int j=i*i; j<=N; j+=i) status[j]=1;
        }
    }
    status[1]=1;

}
int main()
{
    int n,i,j,k,l;
    cin>>n;
    // int a[n+2];
    siv();
    if(n<=2)
    {
        cout<<"1"<<endl;
        for(i=1; i<=n; i++)
        {
            cout<<"1 ";
        }
    }
    else
    {
        cout<<"2"<<endl;
        for(i=2; i<=n+1; i++)
        {
            if(!status[i])
            {
                cout<<"1 ";
                //cout<<i<<" ";
            }
            else
            {
                cout<<"2 ";
            }
        }
    }
}
