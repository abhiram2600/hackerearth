
#include <bits/stdc++.h>
#define endl "\n"
#define sp "\t"
#define f(n) for (int i = 0; i < int(n); i++)
#define ll long long int
#define ln long int
#define fv(n) for(int i=0;i<int(n);i++) cin>>x;
using namespace std;

int main()
{
long int n,k;
cin>>n>>k;
vector<ln> original;
vector<pair<ln,ln> > sorted;
long int x;
for(int i =0;i<n;i++)
{		
	cin>>x;
	ln y = x%k;
	sorted.push_back(make_pair(y,i));
	original.push_back(x);
}
sort(sorted.begin(),sorted.end());
for(int i=0;i<n;i++)
{
	cout<<original[sorted[i].second]<<" ";
}
}
