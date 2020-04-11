#include<bits/stdc++.h>
#define endl "\n"
#define f(n) for(int i=0;i<int(n);i++)
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<int> v;
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u')
        {
            count++;
        }
        else
        {
            v.push_back(count);
            count=0;
        }
    }
    v.push_back(count);
    cout<<*max_element(v.begin(),v.end());
}
