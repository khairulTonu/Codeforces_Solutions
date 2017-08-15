
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2,tmp1,tmp2,tmp3;
    int n,i,j,k,l,cnt1=0,f=0,cnt2=0;
    cin>>n;
    cin>>str1>>str2;
    tmp1=str1;
    tmp2=str2;
    tmp3=str2;
    //tmp1.sort();

    sort(tmp2.begin(),tmp2.end());
    //cout<<tmp2<<endl;
    for(i=0;i<tmp1.size();i++)
    {
        f=0;
        for(j=0;j<tmp2.size();j++)
        {
            if(tmp2[j]>=tmp1[i])
            {
                tmp2[j]=' ';
                //cnt1++;
                f++;
                break;
            }
        }
        if(f==0)
        {
            cnt1++;
        }
    }
    sort(tmp3.begin(),tmp3.end());
    for(i=0;i<tmp1.size();i++)
    {
        f=0;
        for(j=0;j<tmp3.size();j++)
        {
            if(tmp3[j]>tmp1[i])
            {
                tmp3[j]=' ';
                cnt2++;
                f++;
                break;
            }
        }

    }
    cout<<cnt1<<endl<<cnt2;


}
