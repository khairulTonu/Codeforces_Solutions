#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l[100001],r[100001],n,sumL=0,sumR=0,inBeauty,newBeauty,ans,pos=0,newsumL,newsumR;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>l[i]>>r[i];
        sumL=sumL+l[i];
        sumR=sumR+r[i];
    }
    inBeauty=abs(sumL-sumR);
    ans=inBeauty;
    for(i=0;i<n;i++)
    {
        newsumL=sumL-l[i]+r[i];
        newsumR=sumR-r[i]+l[i];
        newBeauty=abs(newsumL-newsumR);
        ans=max(inBeauty,newBeauty);
        if(ans!=inBeauty)
        {
            pos=i+1;
            inBeauty=ans;
        }

    }
    cout<<pos;



}
