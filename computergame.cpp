#include <bits/stdc++.h>
using namespace std;

void	solve()
{
	int	n;
	int	count = 0;
	string a;
	string b;
	cin >> n;
	cin >> a;
	cin >> b;
	map<int, int> m;

	for (int i = 0; i < n; i++)
	{
		if (a[i + 1] == '0' || b[i + 1] == '0')
		{
			count++;
		}
	}
	if (count == (n - 1))
		cout << "YES" << "\n";
	else
		cout << "NO" << "\n";
}

int main()
{
	int	t;
	cin >> t;
	while (t--)
		solve();
}