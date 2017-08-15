#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3,s4;
    int l[10];
    //vector<int>v;
    int i,j,k,f=0,cnt=0,chk,ans;
    char ch1,ch,ch2,ch3,ch4;
    cin>>ch1>>ch2>>s1;
    cin>>ch1>>ch2>>s2;
    cin>>ch1>>ch2>>s3;
    cin>>ch1>>ch2>>s4;

    l[1]=s1.size();
    l[2]=s2.size();
    l[3]=s3.size();
    l[4]=s4.size();

    for(i=1;i<=4;i++)
    {
       // cout<<l[i]<<endl;
        f=0;
        for(j=1;j<=4;j++)
        {

            if(i!=j)
            {
                if(l[i]>=2*l[j])
                {
                    f++;
                }
            }
        }
        int f1=0;
        for(j=1;j<=4;j++)
        {

            if(i!=j)
            {
                if(2*l[i]<=l[j])
                {
                    f1++;
                }
            }
        }

       // cout<<f<<endl;
        if(f==3||f1==3)
        {
           // v.push_back(i);
            cnt++;
            ans=i;
            //cout<<i<<endl;
        }
    }
    if(cnt==1)
    {
        if(ans==1)
        {
            cout<<"A";
        }
        else if(ans==2)
        {
            cout<<"B";
        }
        else if(ans==3)
        {
            cout<<"C";
        }
        else
        {
            cout<<"D";
        }
    }
    else
    {
        cout<<"C";
    }



}
