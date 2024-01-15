#include<bits/stdc++.h>
using namespace std;
int n, m = 0, x[101], y[101], N[101];
void drift(int a) {
	N[a] = 1;
	for (int i = 0; i < n; i++)
	{
		if (N[i] == 0 and (x[i] == x[a] or y[i] == y[a])) {
			drift(i);
		}
	}
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	for (int i = 0; i < n; i++) {
		if (N[i] == 0) {
			drift(i);
			m++;
		}
	}
	cout << m - 1;
}