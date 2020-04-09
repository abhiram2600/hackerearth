#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int flag=0;
        for(long int i=s.size()-1;i>=0;i--)
        {
            if(s[i]!=s[s.size()-1-i]){flag=1;break;}
        }
        if(flag==0)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}