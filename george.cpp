#include <bits/stdc++.h>
using namespace std;

void	solve()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int	n;
	int	count;
	map <int, int> m;

	count = 0;
	cin >> n;

	string b;
	cin >> b;

	string a;
	cin >> a;

	for (int i = 0; i < n; i++)
	{
		if (a[i] == '1')
		{
			if (b[i - 1] == '1' && m[i - 1] == 0)
			{
				count++;
				m[i - 1] = 1;
			}
			else if (b[i] == '0')
			{
				count++;
			}
			else if (b[i + 1] == '1' && m[i + 1] == 0)
			{
				count++;
				m[i + 1] = 1;
			}
		}
	}
	cout << count << endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int	t;
	cin >> t;
	while (t--)
		solve();
	return (0);
}