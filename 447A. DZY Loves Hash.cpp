#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10001],i,j=0,k,l,p,n,rem,cnt=0;
    int b[10001];
    list<int>lst;


    cin>>p>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        rem=a[i]%p;
        b[j]=rem;
        j++;
    }
    /*for(k=1;k<j;k++)
    {
        cout<<b[k]<<" ";
    }
    cout<<endl<<endl;*/
    for(k=0;k<j-1;k++)
    {
        for(l=k+1;l<j;l++)
        {
            if(b[k]==b[l])
            {
                lst.push_back(l+1);
                cnt++;
            }
        }
    }
    if(cnt==0)
    {
        cout<<"-1";
    }
    else
    {
        lst.sort();
        list<int>::iterator it=lst.begin();
        cout<<*it;
    }


}
