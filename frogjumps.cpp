#include <bits/stdc++.h>
using namespace std;

void	solve()
{
	int	n;
	int	count;
	string s;
	cin >> s;
	vector <int> v;
	n = s.length();
	s[n] = 'R';
	count = 1;

	for (int i = 0; i < n + 1; i++)
	{
		if (s[i] != 'R')
			count++;
		else if (s[i] == 'R')
		{
			v.push_back(count);
			count = 1;
		}
	}
	cout << *max_element(v.begin(), v.end()) << "\n";
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