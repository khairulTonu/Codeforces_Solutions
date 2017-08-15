#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[200001];
    int n,i,j,k,l,x,y,z,p,cnt1=0,cnt2=0,cnt3=0,cnt4=0,total=0,sum=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]==1)
        {
            cnt1++;
        }
        else if(a[i]==2)
        {
            cnt2++;
        }
        else if(a[i]==3)
        {
            cnt3++;
        }
        else
        {
            cnt4++;
        }
    }
    if(sum<=4)
    {
        cout<<"1";
        return 0;
    }
    //cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<" "<<cnt4<<endl;
    total=cnt4+cnt3;
    if(cnt1>=cnt3)
    {
        cnt1-=cnt3;
    }
    else if(cnt3>cnt1)
    {
        cnt1=0;
    }
    x=cnt2/2;
    cnt2-=x*2;
    total+=(x+cnt2);
    if(cnt1*2>=cnt2)
    {
        cnt1-=cnt2*2;
        cnt2=0;
    }
    total+=cnt1/4;
    if(cnt1%4>0)
    {
        total++;
    }
    cout<<total;

}
