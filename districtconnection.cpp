#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int	n;
	int	a[5001];
	bool same[5001] = {false};
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (i != 0 && a[i - 1] == a[i])
			same[i - 1] = true;
	}
	if (all_of(same, same + (n - 2), [](bool x) { return x == true;}))
	{
		cout << "NO" << endl;
		return;
	}
	else
	{
		cout << "YES" << endl;
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] != a[j])
			{
				cout << i + 1 << " " << j + 1 << endl;
				break;
			}
			else
				j++;
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int	t;
	cin >> t;
	while (t--)
		solve();
}