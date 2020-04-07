#include<bits/stdc++.h>
using namespace std;
bool check (int N,int i)
{
    if( N & (1 << i) )
        return true;
    else
        return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count =0;
        cin>>n;
        int x = (int)log2(n)+1;
        //cout<<x;
        for(int i=0;i<x;i++)
        {
            if(check(n,i))
            count++;
        }
        cout<<count<<endl;
    }
}