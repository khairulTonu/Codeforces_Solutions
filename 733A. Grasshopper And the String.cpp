#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j=-1,k,l,distance=-1,max_distance=0;
    cin>>s;
    l=s.length();

    for(i=0;i<l;i++)
    {
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
        {

            distance=i-j;
            max_distance=max(max_distance,distance);
            j=i;
        }
    }

    max_distance=max(max_distance,l-j);
    cout<<max_distance;
}
