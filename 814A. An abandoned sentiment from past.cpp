#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100005],b[100005],i,j,k,l,n;
    cin>>n>>k;
    vector<int>v;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<k; i++)
    {
        cin>>b[i];
    }
    sort(b,b+k);
    for(i=0; i<n; i++)
    {
        int f=0;
        //cout<<a[i]<<endl;
        if(a[i]==0)
        {

            for(j=k-1; j>=0; j--)
            {
                //cout<<b[j]<<endl;
                if(b[j]!=0)
                {
                    a[i]=b[j];
                    b[j]=0;
                    f++;
                    break;
                }
            }
            if(f==0)
            {
                cout<<"NO";
                return 0;
            }
        }

    }
    for(i=0; i<n-1; i++)
    {

        if(a[i]>=a[i+1])
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
