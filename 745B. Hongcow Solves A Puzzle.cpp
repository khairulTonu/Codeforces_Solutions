#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m,cnt=0;
   char ch[1200][1200];
   cin>>n>>m;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           cin>>ch[i][j];
       }
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           if(ch[i][j]=='.')
           {
               cnt++;
           }
       }
   }
   if(cnt%2==1)
   {
       cout<<"NO";
   }
   else
   {
       cout<<"YES";
   }
}
