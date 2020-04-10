#include<bits/stdc++.h>
#define endl "\n"
#define f(n) for(int i=0;i<int(n);i++)
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int minnum = 1e10;
        long count= 0;
        long int n;
        cin>>n;
        long int a[n];
        for(long int i=0;i<n;i++)
            {cin>>a[i];if(a[i]<minnum)minnum=a[i];}
        for(long int i=0;i<n;i++)
        {
            if(a[i]==minnum)count++;
        }
        if(count&1)
        cout<<"Lucky"<<endl;
        else
        cout<<"Unlucky"<<endl;
        
    }
}
