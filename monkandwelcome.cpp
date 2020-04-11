#include<bits/stdc++.h>
#define endl "\n"
#define f(n) for(int i=0;i<int(n);i++)
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],x;
    f(n)
    cin>>a[i];
    f(n)
    {
        cin>>x;
        cout<<a[i]+x<<" ";
    }
}
