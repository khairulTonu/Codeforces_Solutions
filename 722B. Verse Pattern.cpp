#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000],i,j,k,l,cnt=0,f=0;
    string s;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    getchar();
    for(i=0; i<n; i++)
    {

        getline(cin,s);


        cnt=0;
        for(j=0; j<s.size(); j++)
        {

            if(s[j]=='a'||s[j]=='i'||s[j]=='e'||s[j]=='o'||s[j]=='y'||s[j]=='u')
            {
                cnt++;

            }
        }
        //cout<<cnt<<endl;
        if(cnt!=a[i])
        {
            f++;
        }

    }
    if(f>0)
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES";
}
