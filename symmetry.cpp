#include <bits/stdc++.h>
#define endl "\n"
#define sp "\t"
#define f(n) for (int i = 0; i < int(n); i++)
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		string s[n];
		for (int i = 0; i < n; i++)
			cin >> s[i];
		bool flag = false;

		for (int i = 0; i < (n / 2) + 1 && !flag; i++)
		{
			for (int j = 0; j < (n / 2) + 1; j++)
			{
				if (s[i][j] == s[i][n - 1 - j] && s[i][j] == s[n - 1 - i][j] && s[i][j] == s[n - 1 - i][n - 1 - j])
				{
				}
				else
				{
					flag = true;
					break;
				}
			}
		}
		if (!flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
