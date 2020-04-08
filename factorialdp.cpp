#include <bits/stdc++.h>
using namespace std;
long int dp[1000007] = {0};
void fact()
{

    dp[0] = 1;
    dp[1] = 1;
    long int mod = 1000000007;
    for (long int i = 2; i <= 100000; i++)
    {
        dp[i] = (i * dp[i - 1]) % mod;
    }
}
int main()
{
    int t;
    cin >> t;
    fact();
    while (t--)
    {
        long int n;
        cin >> n;
        cout << dp[n] << endl;
    }
}