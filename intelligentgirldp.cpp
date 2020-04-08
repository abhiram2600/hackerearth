#include <bits/stdc++.h>
using namespace std;
int dp[100000] = {0};
int f = 0;
int solve(string s)
{

    for (int i = 0; i < s.size(); i++)
    {
        if ((int)s[i] & 1)
            dp[i] = f;
        else
        {
            dp[i] = f++;
        }
    }
}

int main()
{
    string s;
    cin >> s;
    solve(s);
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        cout << f - dp[i] << " ";
    }
}