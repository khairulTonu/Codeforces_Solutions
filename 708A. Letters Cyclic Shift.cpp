#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100001];
    int i,j,k,l,cnt=0;
    cin>>a;
    l=strlen(a);
    for(i=0; i<l; i++)
        if(a[i]!='a')
        {
            j=i;
            while(a[j]!='a'&&j<l)
                j++;
            for(k=i; k<j; k++)
            {
                a[k]--;
            }
            cout<<a;
            return 0;


        }
        a[l-1]='z';
        cout<<a;
}
