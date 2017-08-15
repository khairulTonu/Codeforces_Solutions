#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,w[100005];
    int sum=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>w[i];
    }
    for(i=0;i<n;i++)
    {
        if(w[i]%k==0)
        {
            sum+=(w[i]/k);
        }
        else
        {
            sum+=(w[i]/k)+1;
        }
    }
    cout<<(sum+1)/2;
}

