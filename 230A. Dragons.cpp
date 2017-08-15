#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0,k=0,l,m,n,s,x[100001],y[100001],temp[100001],temp1[100001];
    cin>>s>>n;
    for(i=0; i<n; i++)
    {
        cin>>x[i]>>y[i];
    }
    for(i=0; i<n; i++)
    {
        if(s>x[i])
        {
            s+=y[i];
        }
        else
        {
            temp[j]=x[i];
            temp1[k]=y[i];
            j++;
            k++;
        }
    }
    for(i=0; i<j; i++)
    {
        for(l=0; l<j-1; l++)
        {
            if(temp[l]>temp[l+1])
            {
                swap(temp[l],temp[l+1]);
                swap(temp1[l],temp1[l+1]);
            }
        }
    }

    for(i=0;i<j;i++)
    {
        if(s>temp[i])
        {
            s+=temp1[i];
        }
        else
        {
            cout<<"NO";
            return 0;
        }

    }
    cout<<"YES";

}
