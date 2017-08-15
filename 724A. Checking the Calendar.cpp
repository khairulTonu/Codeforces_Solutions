#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*vector<pair<string,int> >siPair;
    siPair.push_back("sunday",1);
    siPair.push_back("monday",2);
    siPair.push_back("tuesday",3);
    siPair.push_back("wednesday",4);
    siPair.push_back("thursday",5);
    siPair.push_back("friday",6);
    siPair.push_back("saturday",7);*/
    char s1[100],s2[100];
    cin>>s1>>s2;
    if(strcmp(s1,s2)==0)
    {
        cout<<"YES";
    }
    else if((strcmp(s1,"sunday")==0 && strcmp(s2,"wednesday")==0)|| (strcmp(s1,"sunday")==0 && strcmp(s2,"tuesday")==0))
    {
        cout<<"YES";
    }
    else if((strcmp(s1,"monday")==0 && strcmp(s2,"thursday")==0)|| (strcmp(s1,"monday")==0 && strcmp(s2,"wednesday")==0))
    {
        cout<<"YES";
    }
    else if((strcmp(s1,"tuesday")==0 && strcmp(s2,"friday")==0)|| (strcmp(s1,"tuesday")==0 && strcmp(s2,"thursday")==0))
    {
        cout<<"YES";
    }
    else if((strcmp(s1,"wednesday")==0 && strcmp(s2,"saturday")==0)|| (strcmp(s1,"wednesday")==0 && strcmp(s2,"friday")==0))
    {
        cout<<"YES";
    }
    else if((strcmp(s1,"thursday")==0 && strcmp(s2,"sunday")==0)|| (strcmp(s1,"thursday")==0 && strcmp(s2,"saturday")==0))
    {
        cout<<"YES";
    }
    else if((strcmp(s1,"friday")==0 && strcmp(s2,"monday")==0)|| (strcmp(s1,"friday")==0 && strcmp(s2,"sunday")==0))
    {
        cout<<"YES";
    }
    else if((strcmp(s1,"saturday")==0 && strcmp(s2,"tuesday")==0)|| (strcmp(s1,"saturday")==0 && strcmp(s2,"monday")==0))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }




}
