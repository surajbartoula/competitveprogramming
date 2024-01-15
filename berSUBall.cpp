#include <bits/stdc++.h>
using namespace std;
bool visited[101];


int bsearch(int arr[], int l, int r, int x)
{
	for (int m = 0; m < r; m++)
	{
		if ((arr[m] == x || arr[m] == x - 1 || arr[m] == x + 1) && !visited[m])
		{
			visited[m] = true;
			return (arr[m]);
		}
	}
	return (-1);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int	n;
	int	m;
	int	count = 0;
	int	girls[101];
	int	boys[101];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> boys[i];
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> girls[i];
	}
	sort(boys, boys + n);
	sort(girls, girls + m);
	for (int i = 0; i < n; i++)
	{
		if (bsearch(girls, 0, m, boys[i]) != -1)
			count++;
	}
	cout << count << endl;
}