
#include <bits/stdc++.h>
#define endl "\n"
#define sp "\t"
#define f(n) for (int i = 0; i < int(n); i++)
#define ll long long int
#define ln long int
#define pb push_back
using namespace std;

int main()
{
string s;
int x;
vector<string> s1;
cin>>s>>x;
reverse(s.begin(),s.end());
for(int i=1;i<=s.size();i++)
{
	string j = s.substr(0,i);
	reverse(j.begin(),j.end());
	
	s1.pb(j);
}
sort(s1.begin(),s1.end());
cout<<s1[x-1];

}
