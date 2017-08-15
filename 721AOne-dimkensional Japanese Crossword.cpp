#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[111];
    int i,n,cnt=0,cnt_b=0,cnt3=0;
    cin>>n;
    vector<int>v;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(i=0;i<n;i++)
    {
        if(s[i]=='B'){
            cnt++;
            cnt3++;

        }
        else{
            if(cnt>0){
                v.push_back(cnt);
                cnt=0;
            }
        }


    }
    if(cnt>0){
        //cnt_b++;
        v.push_back(cnt);
        cnt=0;
    }
    if(cnt3==0)
    {
        cout<<"0";
        return 0;
    }

    //cout<<cnt_b<<endl;
    //cout<<cnt3;
    vector<int>::iterator it=v.begin();
    cout<<v.size()<<endl;
    while(it!=v.end())
    {
        cout<<*it<<" ";
        it++;
    }

}
